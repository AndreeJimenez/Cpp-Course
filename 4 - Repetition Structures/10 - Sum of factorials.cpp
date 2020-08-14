/*10. Write a program that calculates the value of: 1! +2! +3! + ... + n!
(sum of factorials).*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,sum=0,factorial=1;
	
	cout<<"Enter the total of elements to add: "; 
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *= i; 
		sum +=factorial; 
	}
	
	cout<<"\nThe sum of factorials is: "<<sum<<endl;
	
	system("pause");
	return 0;
}
