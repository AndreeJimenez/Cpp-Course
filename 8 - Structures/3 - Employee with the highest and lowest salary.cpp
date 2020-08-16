/*3. Make a program that reads an array of structures the data of N employees
of the company and print the data of the employee with the highest and lowest salary. */

#include<iostream>
#include<conio.h>
using namespace std;

struct Employee{
	char name[20];
	float salary;	
}e[100];

int main(){
	int employees,higher=0,lower=999999,higherPosition,lowerPosition;
	
	cout<<"Enter the number of employees: "; cin>>employees;
	
	for(int i=0;i<employees;i++){
		fflush(stdin);
		cout<<"Name: "; cin.getline(e[i].name,20,'\n');
		cout<<"Salary: "; cin>>e[i].salary;
		
		if(e[i].salary > higher){
			higher = e[i].salary;
			higherPosition = i;
		}
		
		if(e[i].salary < lower){
			lower  = e[i].salary;
			lowerPosition = i;
		}		
		cout<<"\n";
	}
	
	cout<<"\nEmployee with higher salary: "<<endl;
	cout<<"Name: "<<e[higherPosition].name<<endl;
	cout<<"Salary: "<<e[higherPosition].salary<<endl;
	
	cout<<"\nEmployee with lower salary: "<<endl;
	cout<<"Name: "<<e[lowerPosition].name<<endl;
	cout<<"Salary: "<<e[lowerPosition].salary<<endl;
	
	getch();
	return 0;
}
