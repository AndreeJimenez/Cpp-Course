//8. Write a program that calculates the value of: 1 + 3 + 5 + ... + 2n-1

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,sum=0;
	
	cout<<"Enter the number of elements you want to add: ";
	cin>>n;
	
	for(int i=1;i<=2*n-1;i+=2){
		sum += i;
	}
	
	cout<<"The sum is: "<<sum<<endl;
	
	system("pause");
	return 0;
}
