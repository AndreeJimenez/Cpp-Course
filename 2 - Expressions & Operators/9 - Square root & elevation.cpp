/*9. Make a program that calculates the value that the following function takes for
some given values of x & y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x,y,result = 0;
	
	cout<<"Enter the value of x: "; cin>>x;
	cout<<"Enter the value of y: "; cin>>y;
	
	result = sqrt(x)/(pow(y,2)-1);
	
	cout<<"\nResult: "<<result;
	
	return 0;
}
