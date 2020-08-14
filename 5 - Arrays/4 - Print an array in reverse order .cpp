/*4. Write a program that defines a vector of numbers and displays in the output
 the vector in reverse order — from last to first element.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[5] = {1,2,3,4,5}; 
	
	for(int i=4;i>=0;i--){
		cout<<numbers[i]<<endl;
	}
		
	getch();
	return 0;
}

