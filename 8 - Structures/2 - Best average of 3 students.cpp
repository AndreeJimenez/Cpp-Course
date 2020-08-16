/*2. Make a structure called student, in which you will have the following
Fields: Name, age, average, ask the user for data for 3 students, check which one
of the 3 has the best average and later print the student's data.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Student{
	char name[20];
	int age;
	float average;
}students[3];

int main(){
	int higher = 0, position=0;
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Name: "; cin.getline(students[i].name,20,'\n');
		cout<<"Age: "; cin>>students[i].age;
		cout<<"Average: "; cin>>students[i].average;
		
		if(students[i].average > higher){
			higher = students[i].average;
			position = i; 
		}
		cout<<"\n";
	}
	
	cout<<"\nStudents with the best average: \n";
	cout<<"Name: "<<students[position].name<<endl;
	cout<<"Age: "<<students[position].age<<endl;
	cout<<"Average: "<<students[position].average<<endl;
	
	getch();
	return 0;
}
