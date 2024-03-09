#include <stdio.h>
int sumOdd(int start, int end) {
        if (start > end) {
            return -1;
        }
        else {
            int sum = 0, i = start;
            while(i <= end) {
                if (i % 2 != 0) {
                    sum += i;
                }
                i++;
            }
            return sum;
        }
    }
int main() {
	int res = sumOdd(10,20);
	printf("Result : %d\n", res);
	return 0;
}
