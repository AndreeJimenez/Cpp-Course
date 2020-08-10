/*5. Write a program fragment that swaps the values of two
variables.*/

#include<iostream>

using namespace std;

int main(){
	int x,y, aux;
	
	cout<<"Enter the value of X: "; cin>>x;
	cout<<"Enter the value of Y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nThe new value of X is: "<<x<<endl;
	cout<<"The new value of Y is: "<<y<<endl;
	
	return 0;
}
