#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
int add(int m1[][MAX_SIZE], int m2[][MAX_SIZE], int r, int c){
	cout<<"since you have been gone.";
}
int disp();
int main() {
	int i, j, row, column;
	cout<<"Enter the number of rows and coloumns";
	cin>>row>>column;
	int mat1[row][column], mat2[row][column], sum[row][column];
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			cout<<"Enter the element mat2["<<i<<"]["<<cout<<j<<"] = ";
			cin>>mat1[i][j];
		}
		cout<<endl;
	}
	cout<<"------------------------------------------------"<<endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			cout<<"Enter the element mat2["<<i<<"]["<<cout<<j<<"] = ";
			cin>>mat2[i][j];
		}
		cout<<endl;
	}
	add(mat1, mat2, row, column);
	return 0;
}
