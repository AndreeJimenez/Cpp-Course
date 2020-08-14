/*2. Make a program that defines a 3x3 matrix and writes a loop so that
show the main diagonal of the matrix.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"Showing Full Matrix\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numbers[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n\nShowing main diagonal of the matrix\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<numbers[i][j]<<endl;
			}
		}
	}
	
	getch();
	return 0;
}
