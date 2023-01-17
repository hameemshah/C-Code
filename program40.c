#include<stdio.h>
void main () {
	char str[] = "How are you?";
	char str2[] = "I am fine.";
	char str_concat[50];
	int i = 0;
	while (str[i] != '\0') {
		str_concat[i] = str[i];
		i++;
	}
	int j = i;
	i = 0;
	str_concat[j] = ' ';
	while (str2[i] != '\0') {
		j++;
		str_concat[j] = str2[i];
		i++;
	}
	printf("%s", str_concat);
}
