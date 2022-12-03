#include<stdio.h>
void main() {
	int m, n, i = 2, flag = 1;
	printf("Enter m and n: ");
	scanf("%d%d", &m, &n);
	while (m <= n) {
		while (i <= (m / 2)) {
			printf("%d", i);
			if (m % i == 0) {
				flag = 0;
			}
			++i;
		}
		if (flag) {
			printf("\n%d", m);
		}
		++m;	
	}
}
