/*5. Write a program that reads integer values until enter a
value in the range [20-30] or enter the value 0. The program must
deliver the sum of the entered values greater than 0.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int number, sum = 0;
	
	do{
		cout<<"Enter a number: "; 
		cin>>number; 
		
		if(number>0){
			sum += number;
		}
		
	}while( ((number<20) || (number>30)) && (number!=0) );
	
	cout<<"\nThe sum of all numbers greater than zero is: "<<sum<<endl;
	
	getch();
	return 0;
}
