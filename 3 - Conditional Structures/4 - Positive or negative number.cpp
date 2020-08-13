//4. Check if a number entered by the user is positive or negative.

#include<iostream>

using namespace std;

int main(){
	int number;
	
	cout<<"Enter a number: "; 
	cin>>number;
	
	if(number==0){
		cout<<"The number is zero";
	}
	else if(number>0){
		cout<<"The number is positive";
	}
	else{
		cout<<"The number is negative";
	}
	
	
	return 0;
}
