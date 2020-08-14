/*12. Make a program that calculates the result of the following expression:
1-2 + 3-4 + 5-6 ... n*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,sum=0,even=0,odd=0,negative=0;
	
	cout<<"Enter the total of elements: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i%2==0){
			negative = i * -1;
			even += negative;			
		}
		else{
			odd += i;
		}
	}
	
	sum = even + odd;
	
	cout<<"\nThe sum is: "<<sum<<endl;
	
	system("pause");
	return 0;
}

