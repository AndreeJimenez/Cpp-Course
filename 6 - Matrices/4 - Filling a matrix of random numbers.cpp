/*4. Make a matrix asking the user for the number of rows and columns, fill it with
random numbers, copy the content to another matrix and finally display it in
screen.*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int matrix[100][100],rows,columns;
	int matrix2[100][100],random=0;
	
	cout<<"Enter the number of rows: "; cin>>rows;
	cout<<"Enter the number of columns: "; cin>>columns;
	
	srand(time(NULL));
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			random = 1+rand()%(100); //random numbers from 1 to 100
			matrix[i][j] = random;
		}
	}
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			matrix2[i][j] = matrix[i][j];
		}
	}
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<matrix2[i][j]<<"  ";
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}



