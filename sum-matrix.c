#include <iostream>
int add(int[][], int[][], int, int);
int disp();
int main() {
	int i, j, row, column;
	cout<<"Enter the number of rows and coloumns"<<endl;
	cin>>row>>column;
	int mat1[row][column], mat2[row][column], sum[row][column];
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			printf("Enter the element mat1[%d][%d] = ", i, j);
			scanf("%d", &mat1[i][j]);
		}
		endl;
	}
	return 0;
} 
