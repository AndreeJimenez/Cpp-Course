/*7. Write a program that asks for an age (an integer) and indicates in the
standard output if age entered is in the range [18-25].*/

#include<iostream>

using namespace std;

int main(){
	int age;
	
	cout<<"Enter your age: "; 
	cin>>age;
	
	if((age>=18)&&(age<=25)){
		cout<<"Your age is in the range of [18-25]";
	}
	else{
		cout<<"Your age is out of range";
	}
	
	
	return 0;
}
