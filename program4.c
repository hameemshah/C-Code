#include<stdio.h>
void main() {
	int num1, num2, num3, max;
	printf("Enter the three numbers : ");
	scanf("%d%d%d", &num1,&num2,&num3);
	max = (num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
	printf("Greatest = %d",max);
}
