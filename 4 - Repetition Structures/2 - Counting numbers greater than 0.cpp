/*2. Make a program that reads numbers from standard input until
enter a zero. At that time the program should end and show in the
output the number of values greater than zero read.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int number,count=0; 
	
	do{
		cout<<"Enter a number: "; 
		cin>>number;
		if(number>0){
			count++;
		}
	}while(number != 0);
	
	cout<<"\nThe total of numbers greater than 0 is: "<<count;
	
	getch();
	return 0;
}
