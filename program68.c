#include<stdio.h>
int min(int * arr, int n){
	int i, min = arr[0];
	for (i = 1; i < n; i++){
		if (min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}
int main() {
	int i, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter the elements of array:");
	for (i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	printf("The largest number in the array is %d", min(array, n));
	return 0;
}
