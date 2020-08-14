//8. Make a program that calculates the product of two 3x3 square matrices.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int A[3][3]={{1,2,0},{2,-1,-1},{3,2,3}};
	int B[3][3]={{2,1,1},{-1,1,3},{1,2,4}};
	int C[3][3];
	
	//Multiplying the matrices
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j]=0;
			for(int k=0;k<3;k++){
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<C[i][j]<<"  ";
		}
		cout<<"\n";
	}	
	
	getch();
	return 0;
}

