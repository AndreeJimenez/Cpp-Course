/*3. Ask the user to type 2 strings of characters, and indicate if both strings
 are the same, if not, indicate which is greater alphabetically.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char string1[20],string2[20];
	
	cout<<"Type a string: ";
	cin.getline(string1,20,'\n');
	cout<<"Type another string: ";
	cin.getline(string2,20,'\n');
	
	if(strcmp(string1,string2)==0){
		cout<<"Both strings are the same";
	}
	else if(strcmp(string1,string2)>0){
		cout<<string1<<" is higher alphabetically";
	}
	else{
		cout<<string2<<" is higher alphabetically";
	}
	
	getch();
	return 0;
} 
