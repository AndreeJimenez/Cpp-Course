/*5. Develop a program that reads a vector of integers from standard input
and determine the largest element of the vector.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[100], n, higher=0;
	
	cout<<"Enter the number of elements: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Enter a number: ";
		cin>>numbers[i];
		
		if(numbers[i] > higher){
			higher = numbers[i];
		}
	}
	
	cout<<"\nThe higher element of the vector is: "<<higher<<endl;
	
	getch();	
	return 0;
}
