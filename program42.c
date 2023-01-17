/*Copy contents of one string to other string in C*/
#include<stdio.h>
int main(){
	char s1[10], s2[10];
	int i = 0;
	printf("Enter the first string: ");
	scanf("%s", s1);
	while(s1[i] != '\0'){
		s2[i] = s1[i];
		i++;
	}
	printf("Copied String = %s", s2);
	return 0;
}
