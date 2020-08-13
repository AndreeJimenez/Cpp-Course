/*11. Make a program that simulates an ATM with a beginning balance
of 1000 Dollars.*/

#include<iostream>

using namespace std;

int main(){
	int initialBalance = 1000,option;
	float extra,balance = 0,withdrawal; 
	
	cout<<"\tWelcome to the ATM"<<endl;
	cout<<"1. Deposit money into account"<<endl;
	cout<<"2. Withdraw money from the account"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Option: "; 
	cin>>option;
	
	switch(option){
		case 1: cout<<"\nHow much money do you want to deposit?: "; 
				cin>>extra;
				
				balance = initialBalance + extra;
				cout<<"\nMoney in account: "<<balance; break;
		case 2: cout<<"\nHow much money to withdraw: "; 
				cin>>withdrawal;
				
				if(withdrawal > initialBalance){
					cout<<"You don't have that amount";
				}
				else{
					balance = initialBalance - withdrawal;
					cout<<"\nMoney in account: "<<balance; break;
				}
		case 3: break;
		default: cout<<"Wrong menu option";break;
	}
	
	return 0;
}
