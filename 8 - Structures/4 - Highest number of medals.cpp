/*4. Make a structure arrangement called athlete for N athletes that contains the
following fields: name, country and medals number. Return the data
(Name, country) of the athlete who has won the highest number of medals.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Athlete{
	char name[20];
	char country[20];
	int medals;
}athletes[100];

int main(){
	int n_athletes,higher = 0, higherPosition=0;
	
	cout<<"Enter the number of athletes: ";
	cin>>n_athletes;
	
	for(int i=0;i<n_athletes;i++){
		fflush(stdin);
		cout<<"Name: "; cin.getline(athletes[i].name,20,'\n');
		cout<<"Country: "; cin.getline(athletes[i].country,20,'\n');
		cout<<"Medals number: "; cin>>athletes[i].medals;

		if(athletes[i].medals > higher){
			higher = athletes[i].medals;
			higherPosition = i;
		}
		cout<<"\n";
	}
	
	cout<<"\nAthlete with the highest number of medals: \n";
	cout<<"Name: "<<athletes[higherPosition].name<<endl;
	cout<<"Country: "<<athletes[higherPosition].country<<endl;
	
	getch();
	return 0;
}
