#include<stdio.h>
int lsearch(int [], int, int);
void main () {
	int arr[10], i = 0, num, n, index;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the elements of the array:\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Enter the number you want to search: ");
	scanf("%d", &num);
	index = lsearch(arr, num, n);
	if (index != -1) {
		printf("The number %d is at index %d", num, index);	
	}
	else {
		printf("The number %d does not exsit in the array", num);
	}
}
int lsearch(int a[], int numb, int size) {
	int index = -1, i;
	for (i = 0; i < size; i++) {
		if (numb == a[i]) {
			index = i;
		}
	}
	return index;
}
