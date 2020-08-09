/*2. Write a program that gives the standard input the price of a product and displays
in the standard output the price of the product when applying VAT.*/

#include<iostream>

using namespace std;

int main(){
	float price,finalPrice,VAT;
	
	cout<<"Enter the price of the product: ";
	cin>>price;
	
	VAT = price*0.2;
	finalPrice = price + VAT;
	
	
	cout<<"\nFinal price with  VAT: "<<finalPrice;
	
	
	return 0;
}


