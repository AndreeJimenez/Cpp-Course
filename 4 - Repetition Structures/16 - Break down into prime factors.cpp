/*16. Make a program that calculates the prime factorization of
an integer.

For example: 20 = 2 * 2 * 5.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int number;
	
	cout<<"Enter a number: "; 
	cin>>number;
	
	cout<<"\nBreak down into prime factors: ";
	for(int i=2;number>1;i++){
		while(number%i==0){
			cout<<i<<" ";
			number /= i;
		}
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}
