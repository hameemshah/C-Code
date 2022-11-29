#include<stdio.h>
void main () {
	int range, num = 1, i, sum;
	printf("Enter the range to which you want to find the numbers: ");
	scanf("%d", &range);
	printf("The perfect numbers till %d are:", range);
	while (num < range) {
		i = 1, sum = 0;
		while (i <= num/2) {
			if (num % i == 0)
				sum += i;
		++i;
		}
		if (sum == num) {
			printf("\n%d", num);
		}
	++num;
	}
}
