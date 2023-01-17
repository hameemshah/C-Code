#include <stdio.h>
int i;
void printArray(int *arr, int size) {
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int my_array[] = {1, 2, 3, 4, 5};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    printArray(my_array, size);
    return 0;
}

