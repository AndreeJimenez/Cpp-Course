/*2. Write a program that defines a vector of numbers and computes the
cumulative multiplication of its elements.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[5] = {1,2,3,4,5};
	int multiplication=1;

	for(int i=0;i<5;i++){
		multiplication *= numbers[i];
	}
	
	cout<<"The multiplication of the elements is: "<<multiplication<<endl;
	
	getch();
	return 0;
}

