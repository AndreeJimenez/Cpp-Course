/*3. Make a program that reads the following data for a person from standard input:

	Age: data of type integer.
	Sex: character data.
	Height: floating type data.
	
After reading the data, the program should display it on standard output.*/

#include<iostream>

using namespace std;

int main(){
	int age;
	char sex[10];
	float height;
	
	cout<<"Enter your age: "; cin>>age;
	cout<<"Enter your sex: "; cin>>sex;
	cout<<"Enter your height: "; cin>>height;
	
	cout<<"\nage: "<<age<<endl;
	cout<<"sex: "<<sex<<endl;
	cout<<"height: "<<height<<endl;
	
	
	return 0;
}
