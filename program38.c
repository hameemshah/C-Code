#include<stdio.h>
void main() {
	int i , n = 7,temp, arr[] = {20, 30, 40, 60, 70, 80, 90};
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("After deleting first element.\n");
	for (i = 0; i < n - 1; i++) {
		arr[i] = arr[i+1];
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("After deleting last element.\n");
	for (i = 6; i > 5; i--) {
		arr[i] = arr[i+1];
	}
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
	
