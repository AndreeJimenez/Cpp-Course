/*3. Make an integer matrix of 2 * 2, fill it with numbers, and then copy everything
its content to another matrix.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matrix1[2][2] = {{1,2},{3,4}};
	int matrix2[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			matrix2[i][j]=matrix1[i][j];
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matrix2[i][j];
		}
		cout<<"\n";
	}	
	
	
	getch();
	return 0;
}
