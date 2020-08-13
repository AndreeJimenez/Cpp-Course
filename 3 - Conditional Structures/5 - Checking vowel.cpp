/*5. Write a program that reads a character from standard input and indicates
on standard output whether the character is a lowercase vowel or not.*/

#include<iostream>

using namespace std;

int main(){
	char vowel;
	
	cout<<"Type a character: "; 
	cin>>vowel;
	
	switch(vowel){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"It is a lowercase vowel"; break;
		default : cout<<"It isn't a lowercase vowel"; break;			
	}
		
	return 0;
}
