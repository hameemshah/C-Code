#include<stdio.h>
void main() {
	int num, exp, res = 1, i=0;
	printf("Enter the number and exponenet: ");
	scanf("%d %d", &num, &exp);
	while (i != exp) {
		res *= num ;
		++i;
	}
	printf("Exponent: %d", res);
}
