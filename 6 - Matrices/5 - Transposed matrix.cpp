/*5. Make a program that reads a 3x3 matrix and creates its transposed matrix.
The transposed matrix is one in which column is the same as row of the matrix
original.

| 1 2 3 |	 | 1 4 7 |
| 4 5 6 | -> | 2 5 8 |
| 7 8 9 |	 | 3 6 9 |

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter a number ["<<i<<"]["<<j<<"]: ";
			cin>>numbers[i][j];
		}
	}
	
	cout<<"\nNormal Matrix\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numbers[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nTranspose Matrix\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numbers[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}

