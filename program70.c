#include<stdio.h>
int bsearch(int * arr, int n, int num){
	int i = 0, beg = 0, end = n - 1, mid, loc = -1;
	while (beg <= end){
		mid = (beg + end) / 2;
		if (num < arr[mid]) {
			end = mid - 1;
		}
		else if (num > arr[mid]) {
			beg = mid + 1;
		}
		else {
			loc = mid;
			break;
		}
	}
	return loc;
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
	flag = bsearch(array, n, num);
	flag != -1?printf("\n%d is present at index %d", num, flag):printf("\n%d is not present", num);;
	return 0;	
}
