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
 
 
typedef long long                ll;
typedef long double              ld;
typedef unsigned long long       ull;
typedef pair <int,int>           pii;
typedef pair <ll,ll>             pll;
typedef vector <int>             vi;
typedef vector <ll>              vll;
typedef vector <vector <int> >   vvi;
 
inline int    Int(){int x; cin >> x; return x;}
inline ll     Long(){ll x; cin >> x; return x;}
inline float  Float(){float x; cin >> x; return x;}
inline double Double(){double x; cin >> x; return x;}
inline void   Yes(){cout << "Yes" << endl;}
inline void   No(){cout << "No" << endl;}
inline void   YES(){cout << "YES" << endl;}
inline void   NO(){cout << "NO" << endl;}
 
const int N             =(int)2e5 + 5;
const int maxN          =(int)1e6 + 6;
const ll  Mod           =(ll)1e9 + 7;
const int inf           =(int)2e9;
const ll  Inf           =(ll)1e18;
 
#define     T           int t,q; cin >> t; for(q=1;q<=t;q++)
#define     debug(x)    cerr << #x << " = " << x << '\n' ;
#define     rep(i,b,e)  for(__typeof(e) i=(b); i!=(e+1)-2*(b > e); i =i+1-2*(b > e))
#define     Int         Int()
#define     Long        Long()
#define     Float       Float()
#define     Double      Double()
#define     all(x)      x.begin() , x.end()
#define     sz(x)       (int)x.size()
#define     ff          first
#define     ss          second
#define     pb          push_back
#define     eb          emplace_back
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
#define     biday       return 0 
#define     PI          3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

vector <int> G[N];
int visit[N],par[N],dis[N];

void graphprint(vector<int> G[maxN],int N)
{
	ll i,j;
	cout << "The Graph : " << endl;
	for(i=1; i<=N; i++)
	{
		cout << i << " --> ";
		for(j=0; j<G[i].size(); j++)
			cout << G[i][j] << " ";
		cout << endl;
	}
}

void BFS(int  source)
{
    int next,update,i;

	visit[source] = 1;
	dis[source] = 0;

	queue <ll> Q;
	Q.push(source);
	while(!Q.empty())
	{
        update = Q.front();
        Q.pop();

        for(i=0; i<G[update].size(); i++)
        {
        	next = G[update][i];
        	if(!visit[next])
        	{
        		par[next] = update;
        		visit[next] = 1;
        		dis[next] = dis[update] + 1;
        		Q.push(next);
        	}
        }
	}
}

void path(int n)
{
    if(par[n])
    	path(par[n]);

    cout << n <<" ";
}

 
int main()
{
	cout << "Enter play of Number : ";
	T{
		int N,M,i,u,v,x;
		cout << "Plz enter vertex && edge : ";
		cin >> N >> M;

		cout << "Plz enter the pair of vertex : " << endl;
		for(i=1; i<=M; i++)
		{
			cin >> u >> v;
			G[u].pb(v);
			G[v].pb(u);
		}
		graphprint(G,N);
		
		cout << "Plz enter source : ";
		cin >> x;
        BFS(x);
        for(i=1; i<=N; i++)
        {
        	cout << i << " --> " << dis[i] << endl;
        }

        cout << "This path : ";
        path(N);
        cout << endl << endl;
	}

    

    biday;
}
 
//...............BYE BYE................
