#include<stdio.h>
int lsearch(int * arr, int n, int num){
	int i, index = -1;
	for (i = 0; i < n; i++){
		if (num == arr[i]){
			index = i;
			break;
		}
	}
	return index;
}
int main(){
	int i, num, n, flag;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter the elements of array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	printf("Enter the number you want to find: ");
	scanf("%d", &num);
	flag = lsearch(array, n, num);
	flag != -1?printf("\n%d is present at index %d", num, flag):printf("\n%d is not present", num);;
	return 0;
}
