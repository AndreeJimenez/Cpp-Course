/*1. Make a program that asks the user to type a string of characters, then
check the length of the string, and if it exceeds 10 characters show it in
screen, otherwise not show it.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char phrase[50];
	
	cout<<"Type a string of characters: ";
	cin.getline(phrase,50,'\n'); //Saving the character string
	
	if(strlen(phrase)>10){
		cout<<phrase;
	}
	else{
		cout<<"String does not exceed 10 characters";
	}
		
	getch();
	return 0;
}
