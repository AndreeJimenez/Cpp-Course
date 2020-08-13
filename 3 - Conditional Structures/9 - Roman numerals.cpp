/*9. Change an integer with the same value but in Roman numbers.
	
	M = 1000
	D = 500
	C = 100
	L = 50
	X = 10
	V = 5
	I = 1
*/

#include<iostream>

using namespace std;

int main(){
	int number,units,tens,hundreds,thousand; 
	
	cout<<"Enter a number: "; 
	cin>>number; 
	//2152
	units = number%10; number /= 10; //units = 2 , number = 215
	tens = number%10; number /= 10; //tens = 5 , number = 21
	hundreds = number % 10; number /= 10; //hundreds = 1 , number = 2
	thousand = number % 10 ; number /= 10; //thousand = 2 , number = 0
	//2000+100+50+2 = 2152
	
	switch(thousand){
		case 1: cout<<"M";break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM";break;
	}
	
	switch(hundreds){
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCCC";break;
		case 9: cout<<"CM";break;
	}
	
	switch(tens){
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"LXXX";break;
		case 9: cout<<"XC";break;
	}
	
	switch(units){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
	}
	return 0;
}
