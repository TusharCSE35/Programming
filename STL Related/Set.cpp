#include<bits/stdc++.h>
using namespace std;//   Created by Tushar Sarkar

int main()
{
	int t,i,n;
	set<int, greater <int>>s1;
	set<int, greater <int>> :: iterator st;

    cout << "Plz enter the number of t : ";
	cin >> t;

	cout << "Enter the value elements of t : " << endl;;
	for(i = 1; i <= t; i++)
	{
		cin >> n;
		s1.insert(n);
	}
	cout << "Size of S1 : " << s1.size() << endl;
    
    cout << "S1 print by decending order : ";
	for(st = s1.begin(); st != s1.end(); st++)
	{
		cout << *st << " ";
	}
	cout << endl;

	set<int> s2(s1.begin(),s1.end());
	cout << "s2 print in accending order : ";
	for(st = s2.begin(); st != s2.end(); st++)
	{
		cout << *st << " ";
	}
	cout << endl;

    int x,y;
	cout << "Plz enter S2 after removal of elements less than x : ";
	cin >> x;
	s2.erase(s2.begin(),s2.find(x));
	for(st = s2.begin(); st != s2.end(); st++)
	{
		cout << *st << " ";
	}
	cout << endl;

	cout << "Remove exactly one number in S2 : ";
	cin >> y;
	cout << s2.erase(y) << " Removed" << endl;
	cout << "Then s2 : ";
	for(st = s2.begin(); st != s2.end(); st++)
	{
		cout << *st << " ";
	}
	cout << endl;




    return 0;
}
