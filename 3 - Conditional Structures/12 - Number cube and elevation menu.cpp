/*12. Make a menu that considers the following options:
	Case 1: Cube of a number
	Case 2: Odd or even number
	Case 3: exit.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int option,number,cube;
	
	cout<<"\tMENU"<<endl;
	cout<<"1. cube of a number"<<endl;
	cout<<"2. number even or odd"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"option: "; 
	cin>>option;
	
	switch(option){
		case 1: 
			cout<<"\nEnter a number: "; cin>>number;
			cube = pow(number,3); 
			cout<<"The cube of the number is: "<<cube;break;
		case 2: 
			cout<<"\nEnter a number: "; cin>>number;
			
			if(number%2==0){
				cout<<"The number is even";
			}
			else{
				cout<<"The number is odd";
			}
			break;
		case 3: break;
	}
	
	return 0;
}
