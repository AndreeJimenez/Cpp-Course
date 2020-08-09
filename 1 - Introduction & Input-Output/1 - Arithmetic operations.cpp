/*1. Write a program that reads two numbers from standard input and displays
in the standard output its additionition, subtraction, multiplication and division.*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2, addition = 0, subtraction = 0, multiplication=0,division=0;
	
	cout<<"Digit a number: "; cin>>n1;
	cout<<"Digit another number: "; cin>>n2;
	
	addition = n1 + n2;
	subtraction = n1 - n2;
	multiplication = n1 * n2;
	division = n1 / n2;
	
	cout<<"\nAddition: "<<addition<<endl;
	cout<<"Subtraction: "<<subtraction<<endl;
	cout<<"Multiplication: "<<multiplication<<endl;
	cout<<"Division: "<<division<<endl;
		
	return 0;
}

