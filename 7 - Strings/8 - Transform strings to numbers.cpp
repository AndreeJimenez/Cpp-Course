/*8. Ask the user for 2 strings of numbers, one integerValue and the other real,
convert them to their respective values and finally add them.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	char string1[10],string2[10];
	int integerValue;
	float floatValue;
	
	//Save numbers as a strings
	cout<<"Enter a integer number: ";
	cin.getline(string1,10,'\n');
	cout<<"Enter a float number: ";
	cin.getline(string2,10,'\n');
	
	//Transform strings to numbers
	integerValue = atoi(string1);
	floatValue = atof(string2);
	
	cout<<"\nTotal: "<<integerValue+floatValue<<endl;
	
	getch();
	return 0;
}
