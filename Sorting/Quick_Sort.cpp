#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int left, int right)
{
	int i, j, pivot;
	i = left, j = right, pivot = a[left];

	while (i < j)
	{
		while (a[i] <= pivot)i++;
		while (a[j] > pivot)j--;
		if (i < j)swap(a[i], a[j]);
	}
	swap(a[left], a[j]);
	return j;
}

void quick_sort(int a[], int left, int right)
{
	int fixed;
	if (left < right)
	{
		fixed = partition(a, left, right);
		quick_sort(a, left, fixed - 1);
		quick_sort(a, fixed + 1, right);
	}
}

int main()
{
	int t, i, j, temp, n;
	cout << "Enter test case : ";
	cin >> t;

	while (t--)
	{
		cout << "Enter Value of n : ";
		cin >> n;
		int a[n];

		cout << "Enter elements of a : ";
		for (i = 0; i < n; i++)cin >> a[i];

		quick_sort(a, 0, n - 1);

		cout << "After Sorting array : ";
		for (i = 0; i < n; i++)cout << a[i] << " ";
		cout << endl << endl;
	}


	return 0;
}

