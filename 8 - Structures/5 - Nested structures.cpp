/*5. Make 2 structures, one named average that will have the following fields:
note1, note2, note3; and another named student who will have the following fields:
name, sex, age; make the average structure nested in the
student structure, then ask for all data for a student, then calculate its
average, and finally print all your data including the average.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Average{
	float note1;
	float note2;
	float note3;
};

struct Student{
	char name[20];
	char gender[10];
	int age;
	struct Average average;
}student;

int main(){
	float average_student;
	
	cout<<"Name: "; cin.getline(student.name,20,'\n');
	cout<<"Gender: "; cin.getline(student.gender,10,'\n');
	cout<<"Age: "; cin>>student.age;
	
	cout<<".:Exam notes:."<<endl;
	cout<<"Note1: "; cin>>student.average.note1;
	cout<<"Note2: "; cin>>student.average.note2;
	cout<<"Note3: "; cin>>student.average.note3;
	
	average_student = (student.average.note1+student.average.note2+student.average.note3)/3;
	
	
	cout<<"\n\nShowing Data"<<endl;
	cout<<"Name: "<<student.name<<endl;
	cout<<"Gender: "<<student.gender<<endl;
	cout<<"Age: "<<student.age<<endl;
	cout<<"Average: "<<average_student<<endl;
	
	
	getch();
	return 0;
}
