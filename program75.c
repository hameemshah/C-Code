#include<stdio.h>
#include<stdlib.h>
int * insertBeg(int arr[], int size, int num) {
	int i;
    for (i = size - 1; i >= 0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = num;
	return arr;
}
int main () {
	int i, n, num;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int * array = (int *) calloc(n, sizeof(int));
	printf("Enter the elements of array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", & array[i]);
	}
	printf("Enter the number you want to insert in beginning: ");
	scanf("%d", &num);
	int * arr = insertBeg(array, n, num); 
	if (array == NULL) {
        printf("Failed to allocate memory\n");
        return 1;
    }                                                                                                                         
	printf("Array after inserting the element at beginning :\n");
	for (i = 0; i < n + 1; i++)
		printf("arr[%d] = %d\n", i , arr[i]);
	free(array);
	return 0;
}
