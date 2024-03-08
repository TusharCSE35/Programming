// ॐ नमः शिवाय //
#include <bits/stdc++.h>
using namespace std ;

typedef    long long             ll;
typedef    unsigned long long    ull;
typedef    vector<int>           vi;
typedef    vector<ll>            vl;
typedef    vector<char>          vc;
typedef    vector<string>        vs;
typedef    vector<int>::iterator vit;
typedef    set<int>              si;
typedef    set<string>           s_s;
typedef    set<int>::iterator    sit;
typedef    map<int, int>         mii;
typedef    map<ll, ll>           mll;
typedef    map<string, int>      msi;
typedef    map<string, ll>       msl;
typedef    map<int, string>      mis;
typedef    map<int, string>      mls;
typedef    pair<ll, ll>          pll;
typedef    pair<int, int>        pii;
typedef    pair<ll, ll>          pll;

inline     int         Int()     {int x; cin >> x; return x;}
inline     ll          Long()    {ll x; cin >> x; return x;}
inline     float       Float()   {float x; cin >> x; return x;}
inline     double      Double()  {double x; cin >> x; return x;}
inline     void        Yes()     {cout << "Yes" << endl;}
inline     void        No()      {cout << "No" << endl;}
inline     void        YES()     {cout << "YES" << endl;}
inline     void        NO()      {cout << "NO" << endl;}

const      int N       = (int)2e5 + 5;
const      int maxN    = (int)1e6 + 6;
const      ll  Mod     = (ll)1e9 + 7;
const      int inf     = (int)2e9;
const      ll  Inf     = (ll)1e18;

#define    test        int t,q; cin >> t; for(q=1;q<=t;q++)
#define    For(i,p,n)  for(int i=p;i<=n;i++)
#define    Forb(i,n,p) for(int i=n;i>=p;i--)
#define    Fors(i,s)   for(int i=0;i<s.size();i++)
#define    Sort(s)     sort(s.begin(),s.end())
#define    debug(x)    cerr << #x << " = " << x << '\n' ;
#define    rep(i,b,e)  for(__typeof(e) i=(b); i!=(e+1)-2*(b>e); i=i+1-2*(b>e))
#define    lcm(a,b)    (a*b)/__gcd(a,b)
#define    all(a)      (a).begin(),(a).end()
#define    rall(a)     (a).rbegin(),(a).rend()
#define    gt          greater<int>()
#define    Long        Long()
#define    Float       Float()
#define    Double      Double()
#define    endl        '\n'
#define    sp          <<" "<<
#define    sz(x)       (int)x.size()
#define    ff          first
#define    ss          second
#define    pb          push_back
#define    eb          emplace_back
#define    mp          make_pair
#define    bitcount(x) (int)__builtin_popcount(x)
#define    mem(a)      memset(a,0,sizeof a)
#define    memn(a)     memset(a,-1,sizeof a)
#define    biday       return 0
#define    nl          cout << endl
#define    pt(s)       cout << s << " "
#define    fstp(n)     fixed<<setprecision(n)
#define    pi          acos(-1)

//Error Debug
#define    error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x; while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}

//Input Int
template <typename T> inline void Int(T &n) {
	n = 0; int f = 1; register int ch = getchar();
	for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;
	for (; isdigit(ch); ch = getchar()) n = (n << 3) + (n << 1) + ch - '0';
	n = n * f;
}
template <typename T, typename TT> inline void Int(T &n, TT &m) { Int(n); Int(m); }
template <typename T, typename TT, typename TTT> inline void Int(T &n, TT &m, TTT &l) { Int(n, m); Int(l); }

int dx[8] = {1, 0, -1, 0, -1, -1, 1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll Inv_pow(ll a, ll n) {ll res = 1; while (n) {if (n & 1) res = ((res % Mod) * (a % Mod)) % Mod; a = ((a % Mod) * (a % Mod)) % Mod; n >>= 1;} return res % Mod;}

#define Mx 200005
vector<ll> a(Mx, 0);
vector<vector<ll>> tree(Mx * 4);

void segtree(ll node, ll start, ll end) {
	if (start == end) {
		tree[node] = {a[start], 1, 0, 0};
		return;
	}

	ll left, right, mid;
	left = node * 2;
	right = node * 2 + 1;
	mid = (start + end) / 2;

	segtree(left, start, mid);
	segtree(right, mid + 1, end);

	mll m;
	m[tree[left][0]] += tree[left][1];
	m[tree[left][2]] += tree[left][3];
	m[tree[right][0]] += tree[right][1];
	m[tree[right][2]] += tree[right][3];

	vector<pair<ll, ll>>v;
	for (auto it : m)v.pb({it.ff, it.ss});
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	tree[node] = {v[0].ff, v[0].ss, v[1].ff, v[1].ss};
}

void update(ll node, ll start, ll end, ll indx, ll val) {
	if (indx<start or indx>end)return;
	if (indx == start and indx == end) {
		tree[node] = {val, 1, 0, 0};
		a[indx] = val;
		return;
	}

	ll left, right, mid;
	left = node * 2;
	right = node * 2 + 1;
	mid = (start + end) / 2;

	update(left, start, mid, indx, val);
	update(right, mid + 1, end, indx, val);

	mll m;
	m[tree[left][0]] += tree[left][1];
	m[tree[left][2]] += tree[left][3];
	m[tree[right][0]] += tree[right][1];
	m[tree[right][2]] += tree[right][3];

	vector<pair<ll, ll>>v;
	for (auto it : m)v.pb({it.ff, it.ss});
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	tree[node] = {v[0].ff, v[0].ss, v[1].ff, v[1].ss};
}

vl query(ll node, ll start, ll end, ll l, ll r) {
	if (start >= l and end <= r)return tree[node];
	if (start > r or end < l) return {0, 0, 0, 0};

	ll left, right, mid;
	left = node * 2;
	right = node * 2 + 1;
	mid = (start + end) / 2;

	vl p = query(left, start, mid, l, r);
	vl q = query(right, mid + 1, end, l, r);

	mll m;
	m[p[0]] += p[1];
	m[p[2]] += p[3];
	m[q[0]] += q[1];
	m[q[2]] += q[3];

	vector<pair<ll, ll>> v;
	for (auto it : m)v.pb({it.ff, it.ss});
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	return {v[0].ff, v[0].ss, v[1].ff, v[1].ss};
}

int solve() {
	ll n, k;
	cin >> n >> k;

	For(i, 1, n)cin >> a[i];
	segtree(1, 1, n);

	while (k--) {
		ll check;
		cin >> check;

		if (check == 1) {
			ll indx, val;
			cin >> indx >> val;
			update(1, 1, n, indx, val);
		}
		else {
			ll l, r;
			cin >> l >> r;
			vl res = query(1, 1, n, l, r);
			cout << res[3] << endl;
		}
	}

	biday;
}

int main() {
	// ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif // ONLINE_JUDGE

	int t = 1;
	//cin >> t;
	for (int i = 1; i <= t; i++) {
		//error(i)
		solve();
	}

	biday;
}
//...............BYE BYE................//
