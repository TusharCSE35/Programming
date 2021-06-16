#include<bits/stdc++.h>
using namespace std;

void Vector_print(vector<int>v)
{
	int i;
	cout << "Vector Size : " << v.size() << endl;
	for(i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
	vector <int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);

    Vector_print(v);
    v.resize(5);
    Vector_print(v);

	return 0;
}