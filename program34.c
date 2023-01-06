#include<stdio.h>
void main() {
	int num, i, j, count, arr[10] = {10,22,33,54,65,10,33,33,67,10};
	for (i = 0; i < 10; i++) {
		count = 0;
		for (j = 0; j < 10; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		printf("\n%d is present %d times.", arr[i], count);
	}
	printf("The elements %d is present %d times in the array.", num , count);
}
