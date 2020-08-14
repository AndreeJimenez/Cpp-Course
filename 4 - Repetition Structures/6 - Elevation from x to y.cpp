/*6. Write a program that calculates x ^ y, where both x and y are integers
positive, without using the pow function.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x,y,elevation=1;
	
	cout<<"Enter the value of x: ";cin>>x;
	cout<<"Enter the value of y: ";cin>>y;
	
	for(int i=1;i<=y;i++){
		elevation *= x;
	}
	
	cout<<"\nThe result of the elevation is: "<<elevation;
	
	getch();
	return 0;
}
