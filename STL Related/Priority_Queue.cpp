#include<bits/stdc++.h>
using namespace std;

void Show_Priority_Queue(priority_queue <pair<char,int>> PQ)
{
	while(!PQ.empty())
	{
		pair<char,int>P=PQ.top();
		cout << P.first << " " << P.second << endl;;
		PQ.pop();
	}
    cout << endl;
}

int main()
{
	int N,y,i;
	char x;
	cout << "Plz enter the value of N : ";
	cin >> N;

	priority_queue <pair<char,int>> PQ;

	cout << "Enter the elements pair: \n";
	for(i = 1; i <= N; i++)
	{
		cin >> x >> y;
        PQ.push(make_pair(x,y));
        //or PQ.emplace(x,y);
	}

	cout << "\nThe Priority_Queue is : " << endl;
	Show_Priority_Queue(PQ);

	
    return 0;
}