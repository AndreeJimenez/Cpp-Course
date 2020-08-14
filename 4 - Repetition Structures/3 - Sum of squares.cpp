/*3. Make a program that calculates and displays to standard output the sum of
the squares of the first 10 integers greater than zero.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int sum=0,square;
	
	for(int i=1;i<=10;i++){
		square = i * i;
		sum += square;		
	}
	
	cout<<"\nThe total is: "<<sum;
	
	getch();
	return 0;
}
