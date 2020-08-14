/*1. Make a program that requests from standard input an integer from 1 to
10 and display your multiplication table to standard output.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int number;
	
	do{
		cout<<"Enter a number[1-10]: "; cin>>number;
	}while((number<1) || (number>10));
	
	
	for(int i=1;i<=20;i++){
		cout<<number<<" * "<<i<<" = "<<number*i<<endl;
	}
	
	getch();	
	return 0;
}
