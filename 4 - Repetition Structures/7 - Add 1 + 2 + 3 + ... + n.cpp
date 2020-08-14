//7. Write a program that calculates the value of: 1 + 2 + 3 + ... + n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,sum=0;
	
	cout<<"Enter the total of numbers to add: "; 
	cin>>n;
	
	for(int i=1;i<=n;i++){ 
		sum += i;
	}	
	
	cout<<"\nThe sum is: "<<sum<<endl;
	
	system("pause");	
	return 0;
}
