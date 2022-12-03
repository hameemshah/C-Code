#include<stdio.h>
#include<math.h>
int cal_digits(int);
void main () {
	int num, digit,digits, new_num;
	printf("Enter the number: ");
	scanf("%5d");
	digits = cal_digits(num);
	while(num > 10) {
		if (digit > 9) {
			digit = num % 10;
			num -= digit*pow(digits, 10);
			--digits;
			new_num = digit * 10;	
		}
		else {
			new_num = digit * 10;
		}
	}
	printf("The reverse of number enered is:%d", new_num);
}
int cal_digits(int x) {
	int y = 0;
	do {
		++y;
		x /= 10;
	} while (x > 0);
	return y;	
}
