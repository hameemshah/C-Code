#include<stdio.h>
void main () {
	int n, i;
	printf("Enter the value of n: ");
	scanf("%u", &n);
	int arr[n];
	for (i =0; i < n; i++) {
		printf("\nEnter the element at arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	int small = arr[0], index = 0;
	for (i =1; i < n; i++) {
		if (arr[i] < small) {
			small = arr[i];
			index = i;
		}
	}
	printf("\nThe smallest element in the array is %d at arr[%d]", small,index);
}
