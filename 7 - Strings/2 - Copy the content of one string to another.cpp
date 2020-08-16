/*2. Prompt the user for a character string, store it in an array, and copy everything
its content to another array of characters.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char phrase[20],phrase2[20];
	
	cout<<"Type a string of characters: "; 
	cin.getline(phrase,20,'\n');
	
	strcpy(phrase2,phrase);
	
	cout<<"Phrase: "<<phrase2<<endl;
	
	getch();
	return 0;
}
