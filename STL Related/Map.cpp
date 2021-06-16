#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,x,y,i;
	cout << "Plz enter the value of N : ";
	cin >> N;

	map<int, int> map1;
	map<int, int> :: iterator it;

    cout << "Enter the value of x & y in N times : \n";
	for(i = 1; i <= N; i++)
	{
		cin >> x >> y;
		map1.insert(pair<int, int>(x, y));
	}

	cout << "\nMap1 is : \n";
	cout << "\tKEY\tElEMENT" << endl;
	for(it = map1.begin(); it != map1.end(); it++)
	{
		cout <<"\t"<< it->first <<"\t"<< it->second << endl;
	}
    
    cout << endl;
    //Assigning the elements from gquiz1 to gquiz2 
	map<int, int> map2(map1.begin(), map1.end());
	cout << "Map2 after assign from map1 : \n";
	cout << "\tKEY\tElEMENT" << endl;
	for(it = map2.begin(); it != map2.end(); it++)
	{
		cout <<"\t"<< it->first <<"\t"<< it->second << endl;
	}
	cout << endl;

    int A;
	cout << "Enter the value of A for map2 removal less then Key : ";
	cin >> A;
	map2.erase(map2.begin(),map2.find(A));
	cout << "After remove key " << A << ", map2 is : \n";
	cout << "\tKEY\tElEMENT" << endl;
	for(it = map2.begin(); it != map2.end(); it++)
	{
		cout <<"\t"<< it->first <<"\t"<< it->second << endl;
	}
	cout << endl;

	int B;
	cout << "Enter key for map2 from only one element delate : ";
	cin >> B;
	cout << endl << map2.erase(B) << " Removed\n";
	cout << "After only one remove key " << B << ", map2 is : \n";
	cout << "\tKEY\tElEMENT" << endl;
	for(it = map2.begin(); it != map2.end(); it++)
	{
		cout <<"\t"<< it->first <<"\t"<< it->second << endl;
	}
	cout << endl;

    int C,D;
    cout << "Enter Map1 Lower_bound : ";
    cin >> C;
    cout << "Map1.lower_bound : " << C
         << "\tKEY = "; 
    cout << map1.lower_bound(C)->first << '\t'; 
    cout << "\tELEMENT = "
         << map1.lower_bound(D)->second << endl; 

    cout << "\nEnter Map1 Upper_bound : ";
    cin >> D;     
    cout << "Map1.upper_bound : " << D
         << "\tKEY = "; 
    cout << map1.upper_bound(D)->first << '\t'; 
    cout << "\tELEMENT = "
         << map1.upper_bound(D)->second << endl; 
  
    cout << endl;

	return 0;
}