/*2. Write a program that reads three numbers and determines which of them is
the biggest.*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"Enter 3 numbers: "; 
	cin>>n1>>n2>>n3;
	
	if((n1>n2)&&(n1>n3)){
		cout<<"The biggest is: "<<n1;
	}
	else if((n2>n1)&&(n2>n3)){
		cout<<"The biggest is: "<<n2;
	}
	else{
		cout<<"The biggest is: "<<n3;
	}
	
	
	return 0;
}
