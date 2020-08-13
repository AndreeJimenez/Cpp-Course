/*10. Show the months of the year, asking the user for a number between (1-12),
and show the month to which it corresponds. */

#include<iostream>

using namespace std;

int main(){
	int number;
	
	cout<<"Enter a number between [1-12]: ";
	cin>>number;
	
	switch(number){
		case 1: cout<<"January";break;
		case 2: cout<<"February";break;
		case 3: cout<<"March";break;
		case 4: cout<<"April";break;
		case 5: cout<<"May";break;
		case 6: cout<<"June";break;
		case 7: cout<<"July";break;
		case 8: cout<<"August";break;
		case 9: cout<<"September";break;
		case 10: cout<<"October";break;
		case 11: cout<<"November";break;
		case 12: cout<<"December";break;
		default: cout<<"There is no month for that number";break;
	}
	
	
	return 0;
}
