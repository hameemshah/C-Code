#include<stdio.h>
void main() {
	int i,temp, arr[10] = {20, 30, 40, 60, 70, 80, 90};
	int beg, rand, end, index;
	for (i = 0; i < 7; i++) {
		printf("The element at index %d is %d\n", i, arr[i]);
	}
	printf("\nEnter the element at the beginning of the array:");
	scanf("%d", &beg);
	printf("After Inserting at beginnig.");
	for (i = 7; i >= 0; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = beg;
	for (i = 0; i < 8; i++) {
		printf("\nThe element at index %d is %d", i, arr[i]);
	}
	printf("\nEnter the element at the end of the array:");
	scanf("%d", &end);
	printf("After Inserting at end.");
	arr[8] = end;
	for (i = 0; i < 9; i++) {
		printf("\nThe element at index %d is %d", i, arr[i]);
	}
	printf("\nEnter the element and index to put that there:");
	scanf("%d%d", &rand, &index);
	for (i = 10; i > index; i--) {
		arr[i] = arr[i-1];
	}
	arr[index] = rand;
	printf("After Inserting at index.");
	for (i = 0; i < 10; i++) {
		printf("\nThe element at index %d is %d", i, arr[i]);
	}
}
