#include<stdio.h>	
#include<string.h>
struct Student {
 char name[10];
 int roll_no;
 float cgp;
};

int main() {
	struct Student s1,s2;
	strcpy(s1.name, "Hameem");
	s2.cgp = 9.2;
	s1.roll_no = 321;
	printf("Name of s1 :%s\nRoll Number: %d\nCGP: %f", s1.name, s1.roll_no, s2.cgp);
	return 0;
}
