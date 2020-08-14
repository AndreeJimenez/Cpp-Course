/*7. Make a program that defines two character vectors and then stores the
content of both vectors in a new vector, placing the elements first
of the first vector followed by the elements of the second vector. Show content
of the new vector to standard output.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char words1[] = {'a','b','c','d','e'};
	char words2[] = {'f','g','h','i','j'};
	char words3[10];
	
	for(int i=0;i<5;i++){
		words3[i] = words1[i]; 
	}
	
	for(int i=5;i<10;i++){
		words3[i] = words2[i-5];
	}
	
	for(int i=0;i<10;i++){
		cout<<words3[i]<<endl;
	}
	
	getch();
	return 0;
}



