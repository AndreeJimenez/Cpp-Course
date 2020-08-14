/*3. Write a program that reads from standard input a vector of numbers and
display on standard output the vector numbers with their associated indices.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[100],n;
	
	cout<<"Enter the number of elements: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Enter a number: ";
		cin>>numbers[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<i<<" -> "<<numbers[i]<<endl;
	}
		
	getch();
	return 0;
}

