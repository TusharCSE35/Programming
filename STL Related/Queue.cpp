#include<bits/stdc++.h>
using namespace std;

void Show_Queue(queue <int> Q)
{
	while(!Q.empty())
	{
		cout << Q.front() << " ";
		Q.pop();
	}
    cout << endl;
}

int main()
{
	int N,x,i;
	cout << "Plz enter the value of N : ";
	cin >> N;

	queue <int> Q;

	cout << "Enter the elements of N : \n";
	for(i = 1; i <= N; i++)
	{
		cin >> x;
        Q.push(x);
	}

	cout << "\nThe Queue is : ";
	Show_Queue(Q);

	cout << "\nQueue_Size : " << Q.size() << endl;
	cout << "Queue_FrontValue : " << Q.front() << endl;
	cout << "Queue_BackValue : " << Q.back() << endl;

	Q.pop();
	cout << "\n1 value pop after Queue is : ";
	Show_Queue(Q);


    return 0;
}