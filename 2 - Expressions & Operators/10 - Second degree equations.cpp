/*10. Write a program that calculates the solutions of an equation of
second degree of the form ax ^ 2 + bx + c = 0, taking into account that:
(-b + sqrt (pow (b, 2) -4 * a * c)) / (2 * a) and (-b-sqrt (pow (b, 2) -4 * a * c)) / (2 *to)*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c,result1 = 0,result2 = 0;
	
	cout<<"Enter the value of a: "; cin>>a;
	cout<<"Enter the value of b: "; cin>>b;
	cout<<"Enter the value of c: "; cin>>c;
	
	result1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	result2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout<<"\nResult 1: "<<result1<<endl;
	cout<<"Result 2: "<<result2<<endl;
	
	
	return 0;
}
