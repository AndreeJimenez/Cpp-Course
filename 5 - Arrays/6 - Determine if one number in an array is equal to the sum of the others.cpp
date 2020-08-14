/*6. Write a program that defines a vector of numbers and calculates if it exists
some number in the vector whose value equals the sum of the rest of the numbers
vector.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[5] = {1,2,3,4,10};
	int sum=0,higher=0;
	
	for(int i=0;i<5;i++){
		sum += numbers[i];
		
		if(numbers[i]>higher){
			higher = numbers[i];
		}					  
	}
	
	if(higher == sum-higher){
		cout<<"The number "<<higher<<" is the sum of the others";
	}
	else{
		cout<<"There is no number that is the sum of the others";
	}
	
	getch();
	return 0;
}

