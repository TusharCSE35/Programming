#include<stdio.h>

void merge(int a[], int left, int mid, int right) {
	int temp[right - left + 1];
	int i = left, j = mid + 1, k = 0;

	while (i <= mid && j <= right) {
		if (a[i] <= a[j]) {
			temp[k] = a[i];
			i++;
		} else {
			temp[k] = a[j];
			j++;
		}
		k++;
	}

	while (i <= mid) {
		temp[k] = a[i];
		i++;
		k++;
	}
	while (j <= right) {
		temp[k] = a[j];
		j++;
		k++;
	}

	for (int i = left, k = 0; i <= right; i++, k++) {
		a[i] = temp[k];
	}
}

void merge_sort(int a[], int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;

		merge_sort(a, left, mid);
		merge_sort(a, mid + 1, right);

		merge(a, left, mid, right);
	}
}

int main() {
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);

	int a[n];
	printf("Enter the elements of array: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	int left = 0, right = n - 1;
	merge_sort(a, left, right);

	printf("After sorting: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}

