/*7.Develop a program that determines whether a matrix is symmetric or not. A matrix 
it is symmetric if it is square and if it is equal to its transposed matrix.


| 8 1 3 |	 | 8 1 3 |
| 1 7 4 | -> | 1 7 4 |
| 3 4 9 | 	 | 3 4 9 |

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[100][100],rows,columns;
	char flag='F';
	
	cout<<"Enter the number of rows: "; cin>>rows;
	cout<<"Enter the number of columns: "; cin>>columns;
	
	//Filling matrix
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"Enter a number ["<<i<<"]["<<j<<"]: ";
			cin>>numbers[i][j];
		}
	}
	
	//Checking if it is symmetric
	if(rows==columns){
		for(int i=0;i<rows;i++){
			for(int j=0;j<columns;j++){
				if(numbers[i][j] == numbers[j][i]){
					flag='T';
				}
			}
		}
	}

	if(flag=='T'){
		cout<<"\nIt is a symmetric matrix";
	}
	else{
		cout<<"\nIt is not a symmetric matrix";
	}
	
	getch();
	return 0;
}

