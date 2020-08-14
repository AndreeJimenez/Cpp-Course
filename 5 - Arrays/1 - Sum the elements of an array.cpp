/*1. Write a program that defines a vector of numbers and computes the sum of
its elements.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[5] ={1,2,3,4,5};
	int sum=0;
	
	for(int i=0;i<5;i++){		
		sum += numbers[i]; 
	}
	
	cout<<"The sum of the elements of the array is: "<<sum<<endl;	
	
	getch();
	return 0;
}
