/*8. Write a program that reads from standard input the two legs of a
right triangle and write its hypotenuse to standard output.*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float leg1,leg2,hypotenuse;
	
	cout<<"Enter leg 1: "; cin>>leg1;
	cout<<"Enter leg 2: "; cin>>leg2;
	
	hypotenuse = sqrt(pow(leg1,2)+pow(leg2,2));
	
	cout<<"\nHypotenuse: "<<hypotenuse;
	
	return 0;
}
