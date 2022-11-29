#include<stdio.h>
void main () {
	int num, i = 1, lim, product=0;
	printf("Enter the number whose table you want to get: ");
	scanf("%d", &num);
	printf("\nEnter the table limit: ");
	scanf("%d", &lim);
	do {
		product += num;
		printf("\n%d x %d = %5d", num, i, product);
		++i;
	} while(i <= lim);
}
