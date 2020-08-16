//5. Make a program that determines if a word is palindromic

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char string[20];
	char string2[20];
	
	cout<<"Type a string: ";
	cin.getline(string,20,'\n');
	
	strcpy(string2,string);
	
	strrev(string2);
	
	if(strcmp(string,string2)==0){
		cout<<"It is a string palindrome";
	}
	else{
		cout<<"It is not a string palindrome";
	}	
	
	getch();
	return 0;
}
