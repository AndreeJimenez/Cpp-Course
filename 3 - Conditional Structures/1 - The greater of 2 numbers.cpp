/*1. Write a program that reads two numbers and determines which of them is
the biggest.*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Enter 2 numbers: "; 
	cin>>n1>>n2;
	
	
	if(n1==n2){
		cout<<"Both numbers are the same";
	}
	else if(n1>n2){
		cout<<"The biggest is: "<<n1;
	}
	else{
		cout<<"The biggest is: "<<n2;
	}
	
	return 0;
}
