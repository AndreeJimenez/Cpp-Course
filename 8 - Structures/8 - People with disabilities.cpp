/*8. Define a structure that serves to represent a person. The structure
must contain two fields: the name of the person and a value of logical type that indicates
if the person has some kind of disability. Make a program that given a vector
number of people fill in two new vectors: one containing the people who do not have
disability and another containing people with disabilities.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct DisabilityPerson{
	char name[30];
	bool disability;
}persons[30],personsWithDisability[30],personsWithoutDisability[30];

int main(){
	int n_persons,j=0,k=0;
	
	cout<<"Enter the number of persons: ";
	cin>>n_persons;
	
	for(int i=0;i<n_persons;i++){
		fflush(stdin);
		cout<<"Name : "; cin.getline(persons[i].name,30,'\n');
		cout<<"Disability (1/0)? :"; cin>>persons[i].disability;
		
		if(persons[i].disability == 1){
			strcpy(personsWithDisability[j].name,persons[i].name);
			j++; 
		}
		else{
			strcpy(personsWithoutDisability[k].name,persons[i].name);
			k++;
		}
		cout<<"\n";
	}
	
	cout<<"\nDisability Persons\n";
	for(int i=0;i<n_persons;i++){
		cout<<personsWithDisability[i].name<<endl;
	}
	
	cout<<"\nPersons without Disabilities\n";
	for(int i=0;i<n_persons;i++){
		cout<<personsWithoutDisability[i].name<<endl;
	}
	getch();
	return 0;
}
