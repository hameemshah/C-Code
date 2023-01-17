#include <stdio.h>
int main() {
    int *ptr;
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    int sum = 0;
	ptr = &arr; // ptr points to the first element of the array
    for (;ptr < &arr[sizeof(arr)/sizeof(int)]; ptr++){
    	sum += *ptr;
	}
	printf("Sum = %d", sum);
    return 0;
}

