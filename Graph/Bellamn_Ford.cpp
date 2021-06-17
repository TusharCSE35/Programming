/*********************************************************************************\
*  _________  _      _  ________  _       _       __       ________               *
* |___   ___|| |    | ||  ______|| |     | |     /  \     |  ____  |              *
*     | |    | |    | || |______ | |_____| |    / /\ \    | |____| |              *
*     | |    | |    | ||______  ||  _____  |   / /__\ \   |  __  __|              *
*     | |    | |____| | ______| || |     | |  / ______ \  | |  \ \                *
*     |_|    |________||________||_|     |_| /_/      \_\ |_|   \_\               *
*                                                                                 *
*   Department of Computer Science & Engineering                                  *
*   Student ID : 18CSE035                                                         *
*   Bangabnadhu Sheikh Mujibur Rahman Science & Technology University,Gopalgonj.  *
*                                                                                 *
\*********************************************************************************/

//Now Write to Code ___________________________


#include <bits/stdc++.h>
using namespace std ;
 
 
typedef    long long             ll;
typedef    unsigned long long    ull;
typedef    vector<ll>            vl;
typedef    vector<int>           vi;
typedef    vector<char>          vc;
typedef    vector<string>        vs;
typedef    vector<int>::iterator vit;
typedef    set<int>              si;
typedef    set<string>           ss;
typedef    set<int>::iterator    sit;
typedef    map<int, int>         mii;
typedef    map<string, int>      msi;
typedef    map<int, string>      mis;
typedef    pair<ll, ll>          pll;
typedef    pair<int,int>         pii;
 
inline     int         Int()     {int x; cin >> x; return x;}
inline     ll          Long()    {ll x; cin >> x; return x;}
inline     float       Float()   {float x; cin >> x; return x;}
inline     double      Double()  {double x; cin >> x; return x;}
inline     void        Yes()     {cout << "Yes" << endl;}
inline     void        No()      {cout << "No" << endl;}
inline     void        YES()     {cout << "YES" << endl;}
inline     void        NO()      {cout << "NO" << endl;}
 
const      int N       =(int)2e5 + 5;
const      int maxN    =(int)1e6 + 6;
const      ll  Mod     =(ll)1e9 + 7;
const      int inf     =(int)2e9;
const      ll  Inf     =(ll)1e18;

#define    T           int t,q; cin >> t; for(q=1;q<=t;q++)
#define    Forn(i,n)   for(int i=0;i<n;i++)
#define    ForN(i,n)   for(int i=n-1;i>=0;i--)
#define    forn(i,n)   for(int i=1;i<=n;i++)
#define    forN(i,n)   for(int i=n;i>=1;i--)
#define    fors(i,s)   for(int i=0;i<s.size();i++)
#define    Sort(s)     sort(s.begin(),s.end())
#define    debug(x)    cerr << #x << " = " << x << '\n' ;
#define    rep(i,b,e)  for(__typeof(e) i=(b); i!=(e+1)-2*(b>e); i=i+1-2*(b>e))
#define    gcd(a,b)    __gcd(a , b)
#define    lcm(a,b)    (a*(b/__gcd(a,b)))
#define    all(a)      (a).begin(),(a).end()
#define    rall(a)     (a).rbegin(),(a).rend()
#define    gt          greater<int>()
#define    Int         Int()
#define    Long        Long()
#define    Float       Float()
#define    Double      Double()
#define    endl        '\n'
#define    sp          <<" "<<
#define    sz(x)       (int)x.size()
#define    f           first
#define    s           second
#define    pb          push_back
#define    eb          emplace_back
#define    mp          make_pair
#define    mem(a)      memset(a,0,sizeof a)
#define    memn(a)     memset(a,-1,sizeof a)
#define    biday       return 0 
#define    nl          endl
#define    fstp(n)       fixed<<setprecision(n)
#define    pi          acos(-1)
#define    PI          3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

#define Mx 100005
ll u[Mx],v[Mx],w[Mx],path[Mx];
vl dis,p_res;

ll Bellman(ll source,ll n,ll m)
{
	ll update,x,y,z;
	dis.assign(Mx+1,Inf);
	dis[source]=0;
	path[source]=source;

	Forn(i,n)
	{
        update=1;
		Forn(j,m)
		{
			x=u[j];
			y=v[j];
			z=w[j];

			if(dis[x]!=Inf and dis[x]+z<dis[y])
			{
				dis[y]=dis[x]+z;
				update=0;
				path[y]=x;
				if(i==n-1)return false;
			}
		}
		if(update)break;
	}
	return true;
} 
 
int main()
{
    ll n,m,source,i;
    cin >> n >> m;

    Forn(j,m)cin >> u[j] >> v[j] >> w[j];
    cin >> source;

    if(Bellman(source,n,m))
    {
    	cout << "Distance from dis[" << source << "] to : " << endl;
    	for(i=1; i<=n; i++)cout << "dis[" << i << "] --> " << dis[i] << endl;
        
        if(path[n]!=Inf)
        {
        	vl res;
        	while(1)
        	{
        		res.pb(n);
        		if(n==1)break;
        		n=path[n];
        	}
                reverse(res.begin(),res.end());
                cout << "Path print : ";
                for(i=0; i<res.size(); i++)cout << res[i] << " ";
                cout << endl;	
        }
        else cout << "Path Not possible." << endl;	
    }
    else cout << "It graph shortest path not possible  bcz this is cyclic order." << endl;

    

    biday;
}
 
//...............BYE BYE................
