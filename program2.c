#include<stdio.h>
#define PI 3.1416
int main () {
	int radius;
	float area;
	printf("Enter the radius of circle : ");
	scanf("%d", &radius);
	area = PI*radius*radius;
	printf("The area of circle with radius %d is %f", radius, area);
	return 0;
}
