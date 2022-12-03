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
	int large = arr[0], index = 0;
	for (i =1; i < n; i++) {
		if (arr[i] > large) {
			large = arr[i];
			index = i;
		}
	}
	int second_large = arr[0];
	for (i =1; i < n; i++) {
		if (arr[i] == large) {
			continue;
		}
		if (arr[i] > second_large) {
			second_large = arr[i];
			index = i;
		}
	}
	printf("\nThe second largest element in the array is %d at arr[%d]", second_large,index);
}
