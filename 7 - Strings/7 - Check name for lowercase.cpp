/*7. Ask the user for their name in UPPER CASE, if their name begins with the letter A,
convert its name to lowercase, otherwise don't convert it.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char name[20];
	
	cout<<"Enter your name in UPPERCASE: ";
	cin.getline(name,20,'\n');
	
	if(strncmp(name,"A",1)==0){//strncmp compares only the digits you indicate
		strlwr(name);
		cout<<name<<endl;
	}
	else{
		cout<<"Your name does not start with A";
	}
	
	getch();
	return 0;
}
