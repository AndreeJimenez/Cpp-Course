/*8. Write a program that reads three numbers from standard input. After
must read a fourth number and indicate if the number matches any of the
previously entered.*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	
	cout<<"Enter 3 numbers: ";
	cin>>n1>>n2>>n3; 

	cout<<"Enter a 4th number: "; 
	cin>>n4;
	
	if((n1==n4)||(n2==n4)||(n3==n4)){
		cout<<"The number matches one of the previous numbers";
	}	
	else{
		cout<<"The number does not match any of the above";
	}
	
	return 0;
}
