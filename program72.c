#include<stdio.h>
int frequency(int * arr, int num, int size) {
	int i, frequency = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] == num) {
			frequency++;
		}
	}
	return frequency;
}
int main() {
	int i, num, n, freq;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter the array elements :");
	for (i = 0; i < n; i++) 
		scanf("%d", &array[i]);
	printf("Enter the element you who's frequency you want to find: ");
	scanf("%d", &num);
	printf("%d is present %d times", num, frequency(array, num, n));
}
