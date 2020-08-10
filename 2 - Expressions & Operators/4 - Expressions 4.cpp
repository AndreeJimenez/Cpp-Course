//4. Write the following expression as an expression in C ++: a + (b / (c-d))

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,result = 0;
	
	cout<<"Enter the value of a: "; cin>>a;
	cout<<"Enter the value of b: "; cin>>b;
	cout<<"Enter the value of c: "; cin>>c;
	cout<<"Enter the value of d: "; cin>>d;
	
	result = a + (b/(c-d));
	
	cout.precision(2);
	
	cout<<"Result: "<<result;
	
	return 0;
}
