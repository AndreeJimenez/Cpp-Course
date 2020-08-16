/*6. Convert two strings from lowercase to UPPERCASE. Compare them, and say if they are
the same or not.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char string1[30],string2[30];
	
	cout<<"Type a string: ";
	cin.getline(string1,30,'\n');
	cout<<"Type another string: ";
	cin.getline(string2,30,'\n');
	
	strupr(string1);
	strupr(string2);
	
	if(strcmp(string1,string2)==0){
		cout<<"\nBoth strings are the same";
	}
	else{
		cout<<"Strings are not the same";
	}
	
	getch();
	return 0;
}
