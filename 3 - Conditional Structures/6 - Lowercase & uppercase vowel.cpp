/*6. Write a program that reads a character from standard input and indicates
on standard output if the character is a lowercase vowel, it is a vowel
uppercase or not is a vowel.*/

#include<iostream>

using namespace std;

int main(){
	char word;
	
	cout<<"Type a character: "; 
	cin>>word;
	
	switch(word){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"It is a lowercase vowel";break;
		case 'A': 
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"It is a uppercase vowel";break;
		default : cout<<"It is not a vowel";break;
	}
	
	return 0;
}
