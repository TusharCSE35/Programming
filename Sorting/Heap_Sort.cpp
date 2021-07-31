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
typedef    set<string>           s_s;
typedef    set<int>::iterator    sit;
typedef    map<int, int>         mii;
typedef    map<string, int>      msi;
typedef    map<int, string>      mis;
typedef    pair<ll, ll>          pll;
typedef    pair<int, int>         pii;

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
#define    ff          first
#define    ss          second
#define    pb          push_back
#define    eb          emplace_back
#define    mp          make_pair
#define    mem(a)      memset(a,0,sizeof a)
#define    memn(a)     memset(a,-1,sizeof a)
#define    biday       return 0
#define    nl          endl
#define    fstp(n)     fixed<<setprecision(n)
#define    pi          acos(-1)
#define    PI          3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342


void heapify(ll A[], ll n, ll i)
{
  ll largest, left, right;
  largest = i;
  left = 2 * i + 1;
  right = 2 * i + 2;

  if (left < n and A[left] > A[largest])largest = left;
  if (right < n and A[right] > A[largest])largest = right;
  if (largest != i)
  {
    swap(A[i], A[largest]);
    heapify(A, n, largest);
  }
}

void heapSort(ll A[], ll n)
{
  ll i;
  for (i = n / 2 - 1; i >= 0; i--)heapify(A, n, i);
  for (i = n - 1; i >= 0; i--)
  {
    swap(A[0], A[i]);
    heapify(A, i, 0);
  }
}

int main()
{
  ll n;
  cout << "Enter the value of n : ";
  cin >> n;

  ll A[n];
  cout << "Enter the elements of A : ";
  Forn(i, n)cin >> A[i];

  heapSort(A, n);

  cout << "Sorted array is : ";
  Forn(i, n)cout << A[i] << " ";
  cout << endl;

  biday;
}
