/*6. Use the 2 structures from problem 5, but now ask for the data for N
students, and calculate which of all has the best average, and print their data.*/

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
}students[100];

int main(){
	int n_students,higherPosition=0;
	float average_student[100],higher=0;
	
	cout<<"Enter the number of students: ";
	cin>>n_students;
	
	for(int i=0;i<n_students;i++){
		fflush(stdin);
		cout<<"Name: "; cin.getline(students[i].name,20,'\n');
		cout<<"Gender: "; cin.getline(students[i].gender,10,'\n');
		cout<<"Age: "; cin>>students[i].age;
	
		cout<<".:Exam notes:."<<endl;
		cout<<"Note1: "; cin>>students[i].average.note1;
		cout<<"Note2: "; cin>>students[i].average.note2;
		cout<<"Note3: "; cin>>students[i].average.note3;
	
		average_student[i] = (students[i].average.note1+students[i].average.note2+students[i].average.note3)/3;
		
		if(average_student[i] > higher){
			higher = average_student[i];
			higherPosition = i;
		}
		cout<<"\n";
	}
	
	cout<<"\n\nShowing Student Data with the best Average"<<endl;
	cout<<"Name: "<<students[higherPosition].name<<endl;
	cout<<"Gender: "<<students[higherPosition].gender<<endl;
	cout<<"Age: "<<students[higherPosition].age<<endl;
	cout<<"Average: "<<average_student[higherPosition];
		
	getch();
	return 0;
}
