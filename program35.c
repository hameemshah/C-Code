#include<stdio.h>
void main() {
	printf("hello wordl");
	int arr[20] = {10,22,33,54,65,10,33,33,67,10,55,83,29,50,10,23,63,99,29,92};
	for (int j = 0; j < 20; j++) {
	for (int i = 0; i < 19; i++) {
		if (arr[i+1] < arr[i]) {
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
}
	for (int i = 0; i < 20; i++){
		printf("\n %d", arr[i]);
	}
}
