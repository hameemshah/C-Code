#include<stdio.h>
int display(int *arr){
	int i;
	for (i = 0; i < 10; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
int insert(int* arr, int index, int value) {
    int i;
    for (i = 9; i > index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
	return 0;
}
int main() {
	int i, index, value, array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	display(array);
	printf("Enter the index and value you want to insert:");
	scanf("%d %d", &index, &value);
	insert(array, index, value);
	display(array);
	return 0;
}

