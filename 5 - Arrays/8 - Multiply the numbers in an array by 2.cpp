/*8. Make a program that reads 5 numbers in an array, copies them to another array
multiplied by 2 and show the second array.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numbers[5],numbers2[5];
	
	for(int i=0;i<5;i++){
		cout<<i+1<<". Enter a number: "; cin>>numbers[i];
	}
	
	for(int i=0;i<5;i++){
		numbers2[i] = numbers[i]*2;
	}
	
	cout<<"\nShowing numbers multiplied by 2:\n\n";
	
	for(int i=0;i<5;i++){
		cout<<numbers2[i]<<endl;
	}
	
	getch();
	return 0;
}
