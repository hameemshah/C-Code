#include<stdio.h>
void main() {
	int num, i, count = 0, arr[10] = {10,22,33,54,65,10,33,33,67,10};
	printf("Enter the element you want to check frequency of:");
	scanf("%d", &num);
	for (i = 0; i < 10; i++) {
		if (num == arr[i]) {
			count++;
		}
	}
	printf("The elements %d is present %d times in the array.", num , count);
}
