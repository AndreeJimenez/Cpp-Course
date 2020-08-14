//11. Write a program that calculates the value of: 2 ^ 1 + 2 ^ 2 + 2 ^ 3 + ... + 2 ^ n

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	int n,sum=0,elevation=0;
	
	cout<<"Enter the total of elements to add: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		elevation = pow(2,i);
		sum += elevation;
	}
	
	cout<<"\nThe sum is: "<<sum<<endl;
	
	system("pause");
	return 0;
}
