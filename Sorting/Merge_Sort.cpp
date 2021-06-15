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
 
inline int Int(){int x; cin >> x; return x;}
inline ll Long(){ll x; cin >> x; return x;}
inline float Float(){float x; cin >> x; return x;}
inline double Double(){double x; cin >> x; return x;}
inline void Yes(){cout << "Yes" << endl;}
inline void No(){cout << "No" << endl;}
inline void YES(){cout << "YES" << endl;}
inline void NO(){cout << "NO" << endl;}
 
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

//Create a NJew Function________________
void Marge(int A[],int left,int mid,int right)
{

    int i,l_size,r_size;
    l_size = mid - left + 1;
    r_size = right - mid;

    int L[l_size],R[r_size];
    for(i = 0; i < l_size; i++)
        L[i] = A[left + i];

    for(i = 0; i < r_size; i++)
        R[i] = A[mid + 1 + i];

    int a_index, l_index=0, r_index=0;
    for(a_index = left; l_index < l_size && r_index < r_size; a_index++)
    {

        if(L[l_index] <= R[r_index])
        {
            A[a_index] = L[l_index];
            l_index++;
        }
        else
        {
            A[a_index] = R[r_index];
            r_index++;
        }
    }

    while(l_index < l_size)
    {
        A[a_index] = L[l_index];
        a_index++;
        l_index++;
    }

    while(r_index < r_size)
    {
        A[a_index] = R[r_index];
        a_index++;
        r_index++;
    }
}

void Marge_Sort(int A[],int left,int right)
{

    if(left < right)
    {
        int mid;
        mid = left + (right-left)/2;

        Marge_Sort(A,left,mid);
        Marge_Sort(A,mid+1,right);
        Marge(A,left,mid,right);
    }
}


//Main Function___________________
int main()
{
    cout << "Plz enter the test case of T : ";
    T{
        int N,i;
        cout << "Plz enter the value of N: ";
        cin >> N;

        int A[N+1];
        cout << "The elements of A : ";
        for(i = 0; i < N; i++)cin >> A[i];

        cout << "Before Marge Sorting Array : ";
        for(i = 0; i < N; i++)cout << A[i] << " ";
        cout << endl;

        Marge_Sort(A,0,N-1);
        cout << "After Marge Sorting Array : ";
        for(i = 0; i < N; i++)cout << A[i] << " ";

        cout << endl << endl;
    }

    return 0 ;
}
 
//...............BYE BYE................
