#include<stdio.h>
int main(){
	char s1[10], s2[10];
	int i = 0, flag = 0;
	printf("Enter the first string: ");
	scanf("%s", s1);
	printf("Enter the second string: ");
	scanf("%s", s2);
	while(s1[i] != '\0' || s2[i] != '\0'){
		if(s1[i] != s2[i]){
			flag = 1;
		}
		i++;
	}
	flag?printf("The strings are not equal."):printf("The strings are equal.");
	return 0;
}
