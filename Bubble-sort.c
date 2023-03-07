#include<stdio.h>
int bubble(int[], int);
int main() {
	int array[] = {10, 27, 29, 14, 20, 11};
	bubble(array, sizeof(array)/sizeof(array[0]));
	return 0;
}
int bubble(int arr[], int n) {
	int i,j, temp;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("\nThe element at arr[%d] = arr[%d].", i, arr[i]);
	}
	return 0;
}
