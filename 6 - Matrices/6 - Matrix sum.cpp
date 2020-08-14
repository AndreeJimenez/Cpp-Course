//6. Make a program that calculates the sum of two 3x3 square matrices.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matrix1[3][3] = {{2,0,1},{3,0,0},{5,1,1}};
	int matrix2[3][3] = {{1,0,1},{1,2,1},{1,1,0}};
	
	//Showing the 2 matrices
	cout<<"Matrix 1\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatrix 2\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nSum of matrices\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix1[i][j]+matrix2[i][j]<<" ";
		}
		cout<<"\n";
	}
		
	return 0;
}
