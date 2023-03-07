#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
void frequency(int arr[], int size) {
    int i, j, num, frequency;
    bool counted[size]; // boolean array to keep track of counted elements
    memset(counted, false, sizeof(counted)); // initialize all elements to false

    for (i = 0; i < size; i++) {
        if (counted[i]) {
            continue; // skip elements that have already been counted
        }
        num = arr[i]; 
        frequency = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[j] == num) {
                counted[j] = true; // mark element as counted
                frequency++;
            }
        }
        printf("%d is present %d times.\n", num, frequency);
    }
}
int main() {
    int i, num, n, freq;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int * array = (int*)calloc(n , sizeof(int));
    if (array == NULL) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    frequency(array, n);

    free(array);

    return 0;
}

