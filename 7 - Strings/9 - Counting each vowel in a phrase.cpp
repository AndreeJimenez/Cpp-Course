/*9. Make a program that reads a string of characters from input and
show to output how many occurrences of each vowel exist in the string.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char phrase[30];
	int vowel_a=0,vowel_e=0,vowel_i=0,vowel_o=0,vowel_u=0;
	
	cout<<"Type a phrase: ";
	cin.getline(phrase,30,'\n');
	
	for(int i=0;i<30;i++){
		switch(phrase[i]){
			case 'a': vowel_a++; break;
			case 'e': vowel_e++; break;
			case 'i': vowel_i++; break;
			case 'o': vowel_o++; break;
			case 'u': vowel_u++; break;
		}
	}
	
	cout<<"\nVowel counter"<<endl;
	cout<<"vowel a: "<<vowel_a<<endl;
	cout<<"vowel e: "<<vowel_e<<endl;
	cout<<"vowel i: "<<vowel_i<<endl;
	cout<<"vowel o: "<<vowel_o<<endl;
	cout<<"vowel u: "<<vowel_u<<endl;
		
	getch();
	return 0;
}
