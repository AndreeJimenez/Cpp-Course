/*3. Make a program that will read an integer value and determine if it is a
odd or even number.*/

#include<iostream>

using namespace std;

int main(){
	long long int number;
	
	cout<<"Enter a number: ";
	cin>>number;
	
	if(number==0){
		cout<<"The number is zero";
	}
	else if(number%2==0){
		cout<<"The number is even";
	}
	else{
		cout<<"The number is odd";
	}
	
	
	return 0;
}
