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
typedef    long double           ld;
typedef    unsigned long long    ull;
typedef    pair<int,int>         pii;
typedef    pair<ll,ll>           pll;
typedef    vector<int>           vi;
typedef    vector<ll>            vll;
typedef    vector<vector<int>>   vvi;
 
inline     int         Int(){int x; cin >> x; return x;}
inline     ll          Long(){ll x; cin >> x; return x;}
inline     float       Float(){float x; cin >> x; return x;}
inline     double      Double(){double x; cin >> x; return x;}
inline     void        Yes(){cout << "Yes" << endl;}
inline     void        No(){cout << "No" << endl;}
inline     void        YES(){cout << "YES" << endl;}
inline     void        NO(){cout << "NO" << endl;}
 
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
#define    gt          greater<int>()
#define    Int         Int()
#define    Long        Long()
#define    Float       Float()
#define    Double      Double()
#define    all(x)      x.begin() , x.end()
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
#define    sp(n)       fixed<<setprecision(n)
#define    pi          acos(-1)
#define    PI          3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342
 

void simple_sieve(ll m, vll &prime)
{
    ll i,j,limit,x;
    limit=sqrt(m);
    x=sqrt(limit)+1;

    ll visit[limit+5];
    memset(visit,false,sizeof(visit));

    for(i=4; i<=limit; i+=2)visit[i]=true;
    if(limit>=2)prime.pb(2);	

    for(i=3; i<=limit; i+=2)
    {
    	if(!visit[i])
    	{
    		prime.pb(i);
    		if(i<=x)
    		{
                        for(j=i*i; j<=limit; j+=i*2)
                 	        visit[j]=true;
    		}
    	}
    }
}

void segmented_sieve(ll n,ll m)
{
	ll i,j,limit,x,y;
	vll prime,res;
	simple_sieve(m,prime);
	//for(i=0; i<prime.size(); i++)cout << prime[i] << " ";
	//cout << endl;

    limit=m-n+1;
    ll visit[limit+5];
    memset(visit,false,sizeof(visit));
    if(n==1)visit[1]=true;

    for(i=0; i<prime.size(); i++)
    {
    	x=prime[i];
    	y=(n/x)*x;
    	if(y<n)y+=x;
    	if(y==x)y+=x;

    	for(j=y; j<=m; j+=x)visit[j-n+1]=true;
    }

    for(i=1; i<=limit; i++)
    {
    	if(!visit[i])
	{
    		res.pb(i+n-1);
	}
    }
    for(i=0; i<res.size(); i++)cout << res[i] << endl;	
}
 
int main()
{
    T{
    	ll n,m,i;
        cin >> n >> m;
    
        segmented_sieve(n,m);
    }
    
    biday;
}
 
//...............BYE BYE................
