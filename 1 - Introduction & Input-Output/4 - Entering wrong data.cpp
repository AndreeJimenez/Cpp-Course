/*4. Run the program from the previous exercise with wrong entries and
look at the results. For example, enter character data
when an integer data is expected.*/

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
