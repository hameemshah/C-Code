#include<stdio.h>
int bsearch(int [], int, int);
void main () {
	int arr[10], i, n, l, num;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the elements (in increasing order) of the array:\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Enter the number you want to search: ");
	scanf("%d", &num);
	l = bsearch(arr, n , num);
	if (l != -1) {
		printf("The number %d is found at index %d", num, l);
	}
	else {
		printf("The number %d does not exsit in the array.", num);
	}
}
int bsearch(int a[], int n, int item){
	int loc = -1, beg = 0, end = n - 1, mid;
	while (beg <= end) {
		mid = (beg + end) / 2;
		if (item == a[mid]) {
			loc = mid;
			break;
		}
		else if (item < a[mid]) {
			end -= 1;
		}
		else {
			beg += 1;
		}
	}
	return loc;
}
