#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int cal_digits(unsigned long int);
bool check_arm(unsigned long int, int);
void main() {
	unsigned long int num;
	int digits;
	bool flag;
	printf("Enter the number to check whether it is Armstrong or not:");
	scanf("%lu", &num);
	digits = cal_digits(num);
	flag = check_arm(num, digits);
	if (flag == true)
		printf("Yes");
	else 
		printf("No");
}
int cal_digits(unsigned long int x) {
	int y = 0;
	do {
		++y;
		x /= 10;
	} while (x > 0);
	return y;	
}
bool check_arm(unsigned long int x, int d) {
	int num, sum = 0, y, hameem = x;
	y = d;
	do {
		num = x/pow(10,y-1);
		sum += pow(num, d);
		x -= num * pow(10,y-1);
		--y;
	} while(y>=0);
	return sum == hameem ? true : false;
}
