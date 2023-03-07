#include<stdio.h>
int main () {
	int arr[5], temp[5], i, j=5;
	printf("Enter elements of array : ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);		
	}
	for (i = 0; i < 5; i++) {
		--j;
		temp[i] = arr[j];		
	}
	for (i = 0; i < 5; i++) {
		arr[i] = temp[i];
		printf("%d", arr[i]);		
	}
	return 0;
}
