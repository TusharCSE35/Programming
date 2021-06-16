//1. sort(first_iterator, last_iterator) – To sort the given vector.
//2. reverse(first_iterator, last_iterator) – To reverse a vector.
//3. *max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
//4. *min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
//5. accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements

//Now Write to code________________.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,i,max,min,sum;
	cout << "Plz enter the value of N : ";
	cin >> N;

	int A[N];
	cout << "Enter the elements of Array : ";
	for(i = 0; i < N; i++)
	{
         cin >> A[i];
	}

	vector <int> vect(A,A+N);
	cout << "\nBefore Sorting Vector : ";
	for(i = 0; i < N; i++)
	{
		cout << vect[i] << " ";
	}

	cout << "\nAfter Sorting Vector  : ";
	sort(vect.begin(),vect.end());
	for(i = 0; i < N; i++)
	{
		cout << vect[i] << " ";
	}
    
    

	/*

	reverse(vect.begin(),vect.end());
	cout << "\nAfter Reverse Vector  : ";
	for(i = 0; i < N; i++)
	{
		cout << vect[i] << " ";
	}

	max = *max_element(vect.begin(),vect.end());
	cout << "\nMaximum Element of Vector is : " << max;

	min = *min_element(vect.begin(),vect.end());
	cout << "\nMinimum Element of Vector is : " << min;

	sum = accumulate(vect.begin(),vect.end(),0);
	cout << "\nSummation of Vector Element is : " << sum;

	cout << endl;*/
	


    return 0;
} 