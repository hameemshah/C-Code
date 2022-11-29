#include<stdio.h>
#include<math.h>
static int cal_digits(unsigned long int);
int cal_sum(unsigned long int, int);
void main () {
	unsigned long int num;
	int digits;
	printf("Enter the number less than 10 digits: ");
	scanf("%lu", &num);
	digits = cal_digits(num);
	printf("The sum of digits is:%d", cal_sum(num, digits));
	getch();
}
static int cal_digits(unsigned long int x) {
	int y = 0;
	do {
		++y;
		x /= 10;
	} while (x > 0);
	return y;	
}
int cal_sum(unsigned long int x, int y) {
	int sum = 0,digit,num;
	do {
		num = x/pow(10,y-1);
		sum += num;
		x -= num * pow(10,y-1);
		--y;
	} while(y >= 0);
	return sum;
}
