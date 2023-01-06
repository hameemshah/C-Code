#include<stdio.h>
void main () {
	int year;
	printf("Enter the year :");
	scanf("%4d", &year);
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("Leap!!!");
			}
			else {
				printf("Not Leap!!!");
			}
		}	
		else {
			printf("Leap!!!");
		}
	}
	else {
		printf("Not Leap!!!");
	}
}
