#include<stdio.h>
int  sum(int * arr, int n) {
	int i, sum = 0;
	for (i = 0; i < n; i++){
		sum += arr[i];
	}
	return sum;
}
int main() {
	int i, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter the elements of the array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	printf("The sum of the elements of the array is: %d", sum(array, n));
}
