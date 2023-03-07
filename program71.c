#include<stdio.h>
int reverse(int * arr, int n) {
	int i, j = n - 1, rev[n];
	for (i = 0; i < n; i++) {
		rev[i] = arr[j];
		--j;
	}
	printf("Reverse array:\n");
	for (i = 0; i < n; i++)
		printf("%d", rev[i]);	
	return 0;
}
int main() {
	int i, n;
	printf("Enter the number of elements of array: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter the elements of array:");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);
	reverse(array, n);
	return 0;
}
