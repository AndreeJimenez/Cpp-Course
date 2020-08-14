//9. Write a program that calculates the value of: 1 * 2 * 3 * ... * n (factorial)

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,factorial=1;
	
	cout<<"Enter a number: "; 
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *= i;
	}
	
	cout<<"\nThe factorial of the number is: "<<factorial<<endl;
	
	system("pause");
	return 0;
}
