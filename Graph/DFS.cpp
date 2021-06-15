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
 

#define mx 100 
vector <int> graph[mx]; 
bool visit[mx];
 
void graph_print(int n)
{
	int i,j;
	cout << "The graph is : " << endl;
	for(i = 0; i < n; i++)
	{
		cout << i << " -> ";
		for(j = 0; j < graph[i].size(); j++)
		{
			cout << graph[i][j] << " ";
		}
		cout << endl;
	} 
}

void DFS(int source)
{
	int i,next;
	visit[source] = 1;

	for(i = 0; i < graph[source].size(); i++)
	{
		next = graph[source][i];
		if(visit[next] == 0)
		{
			DFS(next);
		}
	}

}

int main()
{

	int node,edge,i,u,v,source;
	cout << "Plz enter the value of node & edge : ";
	cin >> node >> edge;

	cout << "Enter the pair of node : " << endl;
	for(i = 1; i <= edge; i++)
	{
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	graph_print(node);

	cout << "Enter the source : ";
	cin >> source;
	DFS(source);
    
    for(i = 0; i < node; i++)
    {
    	if(visit[i] == 1)
    	{
    		cout << "Node " << i << " is Visited" << endl;
    	}
    	else
    	{
    		cout << "Node " << i << " is Not Visited" << endl;
    	}
    }


    biday;
}
 
//...............BYE BYE................
