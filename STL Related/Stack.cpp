#include<bits/stdc++.h>
using namespace std;

void Show_Stack(stack <int> st)
{
	while(!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
    cout << endl;
}

int main()
{
	int N,x,i;
	cout << "Plz enter the value of N : ";
	cin >> N;

	stack <int> st;

	cout << "Enter the elements of N : \n";
	for(i = 1; i <= N; i++)
	{
		cin >> x;
        st.push(x);
	}

	cout << "\nThe Stack is : ";
	Show_Stack(st);

	cout << "\nStack_Size : " << st.size() << endl;
	cout << "Stack_TopValue : " << st.top() << endl;

	st.pop();
	cout << "\n1 value pop after Stack is : ";
	Show_Stack(st);


    return 0;
}