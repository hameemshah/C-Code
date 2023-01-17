#include<stdio.h>
void main() {
	int arr[] = {12,37,29,10,72,34,12,9,0,-19,29,22,0,22};
	int i, j, key;
	for(i = 1; i < sizeof(arr)/sizeof(int); i++){
		j = i-1;
		key = arr[i];
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
	for(i = 0; i < sizeof(arr)/sizeof(int); i++){
		printf("%d ", arr[i]);
	}
}
