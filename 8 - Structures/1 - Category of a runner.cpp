/*1. Make a structure called a runner, in which you will have the following
fields: Name, age, gender, club, ask the user for data for a runner, and assign him
a competition category:
	- Youth <= 18 years
	- Adult <= 40 years
	- Veteran> 40 years
Later print all the data of the runner, including its category of
competition.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Runner{
	char name[20];
	int age;
	char gender[10];
	char club[20];
}runner;

int main(){
	char category[20];
	
	cout<<"Name: "; cin.getline(runner.name,20,'\n');
	cout<<"Age: "; cin>>runner.age;
	fflush(stdin);
	cout<<"Gender: "; cin.getline(runner.gender,10,'\n');
	cout<<"Club: "; cin.getline(runner.club,20,'\n');
	
	if(runner.age <= 18){
		strcpy(category,"Youth");
	}	
	else if(runner.age <= 40){
		strcpy(category,"Adult");
	}
	else{
		strcpy(category,"Veteran");
	}
	
	cout<<"\n\nShowing Data"<<endl;
	cout<<"Name: "<<runner.name<<endl;
	cout<<"Age: "<<runner.age<<endl;
	cout<<"Gender: "<<runner.gender<<endl;
	cout<<"Club: "<<runner.club<<endl;
	cout<<"Category: "<<category<<endl;
	
	getch();
	return 0;
}
