#include<stdio.h>
int num1 = 10, num2 = 20, *int_ptr1 = &num1, *int_ptr2 = &num2;
float fnum1 = 10.5, fnum2 = 20.5, *float_ptr1 = &fnum1, *float_ptr2 = &fnum2;
char ch1 = 'a', ch2 = '1', *char_ptr1 = &ch1, *char_ptr2 = &ch2;
void increment() {
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	printf("After incrementing.\n");
	int_ptr1++;
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	printf("-----------------------------------------------------------------\n");
	printf("The floating pointer *float_ptr1 = %d\n", float_ptr1);
	printf("After incrementing.\n");
	float_ptr1++;
	printf("The floating pointer *float_ptr1 = %d\n", float_ptr1);
	printf("-----------------------------------------------------------------\n");
	printf("The character pointer *char_ptr1 = %d\n", char_ptr1);
	printf("After incrementing.\n");
	char_ptr1++;
	printf("The character pointer *char_ptr1 = %d\n", char_ptr1);
}
void decrement() {
	printf("-----------------------------------------------------------------\n");
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	printf("After decrementing.\n");
	int_ptr1--;
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	printf("-----------------------------------------------------------------\n");
	printf("The floating pointer *float_ptr1 = %d\n", float_ptr1);
	printf("After decrementing.\n");
	float_ptr1--;
	printf("The floating pointer *float_ptr1 = %d\n", float_ptr1);
	printf("-----------------------------------------------------------------\n");
	printf("The character pointer *char_ptr1 = %d\n", char_ptr1);
	printf("After decrementing.\n");
	char_ptr1--;
	printf("The character pointer *char_ptr1 = %d\n", char_ptr1);	
}
void addition() {
	printf("-----------------------------------------------------------------\n");
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	printf("After adding 5.\n");
	int_ptr1 += 5;
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	//printf("-----------------------------------------------------------------\n");
	
}
void subtraction() {
	printf("-----------------------------------------------------------------\n");
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	printf("After subtracting 5.\n");
	int_ptr1 -= 5;
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	printf("-----------------------------------------------------------------\n");
	printf("The interger pointer *int_ptr1 = %d\n", int_ptr1);
	printf("The interger pointer *int_ptr2 = %d\n", int_ptr2);
	printf("Subtraction of *int_ptr1 and *int_ptr2 = %d\n", int_ptr1 - int_ptr2);	
}
void compare() {
	printf("-----------------------------------------------------------------\n");
	printf("Comparing *int_ptr1 >= *intr_ptr2 = %d", int_ptr1 >= int_ptr2);
}
void main() {
	increment();
	decrement();
	addition();
	subtraction();
	compare();
}
