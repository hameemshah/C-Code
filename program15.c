#include<stdio.h>
void main () {
	int num, flag, i = 2;
	printf("Enter the number: ");
	scanf("%d", &num);
	if (num == 1 || num == 2) {
		flag = 0;
		goto label;
	}
	while (i <= num/2) {
		if ((num % i) == 0) {
			flag = 1;
			break;
		}
		else {
			flag = 0;
		}
		++i;
	}
	label:
		if (flag == 1) {
			printf("Not Prime");
		}
		else {
			printf("Prime.");
		}
}
