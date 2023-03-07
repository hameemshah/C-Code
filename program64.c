#include<stdio.h>
int odd_even(int);
int main() {
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	odd_even(n);
}
int odd_even(num) {
	if (num % 2 == 0) {
		printf("%d is Even", num);
	}
	else {
		printf("%d is Odd", num);
	}
	return 0;
}
