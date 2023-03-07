#include<stdio.h>
int max(int * arr, int n){
	int i, max = arr[0];
	for (i = 1; i < n; i++){
		if (max < arr[i]){
			max = arr[i];
		}
	}
	return max;
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
	printf("The largest number in the array is %d", max(array, n));
	return 0;
}
