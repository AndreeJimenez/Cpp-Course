/*1. Make a program to fill an array asking the user for the number of rows
and columns, then show the matrix on the screen.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[100][100],rows,columns;
	
	cout<<"Enter the number of rows: "; cin>>rows;
	cout<<"Enter the nomber of columns: "; cin>>columns;
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"Enter a number ["<<i<<"]["<<j<<"]: ";
			cin>>numbers[i][j];
		}
	} 
	
	cout<<"\nShowing matrix\n\n";
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<numbers[i][j];
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}
