#include<stdio.h>
void main() {
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int arr[n], rev[n], j = n;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("The numbers in reverse array are: ");
	for (i = 0; i < n; i++) {
		--j;
		rev[i] = arr[j];
		printf("%d\n", rev[i]);
	}
}
