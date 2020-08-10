//1. Write the following expression as an expression in C++: (a/b) + 1

#include<iostream>

using namespace std;

int main(){
	float a,b,result=0;
	
	cout<<"Enter the value of a: "; cin>>a;
	cout<<"Enter the value of b: "; cin>>b;
	
	result = (a/b) + 1;
	
	cout.precision(2);
	
	cout<<"Result: "<<result;	
	
	return 0;
}
