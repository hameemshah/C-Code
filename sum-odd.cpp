#include <iostream>
using namespace std;
class Odd {
public:
    static int sumOdd(int start, int end) {
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
};
int main() {
	int res = Odd::sumOdd(10,20);
	cout<< "Result : " << res << endl;
	return 0;
}




