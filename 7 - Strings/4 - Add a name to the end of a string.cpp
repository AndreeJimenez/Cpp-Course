/*4. Create a string that has the following phrase "Hello how are you", then create another
string to ask the user for their name, finally add the name to the end of
the first string and display the full message "Hello, how are you (UserName)".*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char string1[] = "Hello, how are you ";
	char string2[20];
	
	cout<<"Enter your name: ";
	cin.getline(string2,20,'\n');
	
	strcat(string1,string2);
	
	cout<<"Phrase: "<<string1<<endl;	
	
	
	getch();
	return 0;
}
