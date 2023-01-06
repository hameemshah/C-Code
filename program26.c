#include<stdio.h>
void main () {
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int arr[n], sum = 0, i;
	printf("Enter the elements of array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("The sum of the elements of array is %d", sum);
}
