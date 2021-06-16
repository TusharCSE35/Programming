#include<bits/stdc++.h>
using namespace std;

struct Car
{
    string brand;
    double price;
};

void Vector_print(vector<Car>v)
{
	int i;
	cout << "Vector_Size : " << v.size() << endl;
	for(i = 0; i < v.size(); i++)
	{
		cout << v[i].brand << ": " << v[i].price << endl;
	}
	cout << endl;
}

int main()
{
	vector <Car> v;

    Car c1 = {"Corola",12345.12};
    Car c2 = {"Alex",23451.10};
    Car c3 = {"Ferari",34512.20};
    Car c4 = {"BMW12",45123.15};

    v.push_back(c1);
    v.push_back(c2);
    v.push_back(c3);
    v.push_back(c4);

    Vector_print(v);

	return 0;
}