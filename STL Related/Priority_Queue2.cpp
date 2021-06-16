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
 
void Pq1_print(priority_queue <int> Pq)
{
	cout << "Priority_Queue_1 : ";
	while(!Pq.empty())
	{
		cout << Pq.top() << " ";
		Pq.pop();
	}
	cout << endl;
}
void Pq2_print(priority_queue <int> pQ)
{
	cout << "Priority_Queue_2 : ";
	while(!pQ.empty())
	{
		cout << pQ.top() << " ";
		pQ.pop();
	}
	cout << endl;
}

 
int main()
{
	cout << "Plz enter Number of play : ";
	T{
		ll N,i,t;
		cout << "Enter the Number of N : ";
		cin >> N;

		priority_queue <int> Pq;
		priority_queue <int> pQ;
		cout << "Enter the elements of Pq1 : ";
		for(i=0; i<N; i++)
		{
			cin >> t;
			Pq.push(t);
		}

		cout << "Enter the elements of Pq2 : ";
		for(i=0; i<N; i++)
		{
			cin >> t;
			pQ.push(t);
		}

		Pq.swap(pQ);
		Pq1_print(Pq);
		Pq2_print(pQ);

/*
		cout << "This Priority_Queue : ";
		Pqprint(Pq);
		cout << "Priority_Queue_Size : " << Pq.size() << endl;
		cout << "Top_Posistion : " << Pq.top() << endl;
		Pq.pop();
		cout << "After one value remove : ";
		Pqprint(Pq);
        
        cout << "Increassing Order : ";
		pQprint(pQ);
        */
        cout << endl;
	}
    

    biday;
}
 
//...............BYE BYE................