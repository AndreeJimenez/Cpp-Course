/*6. Write a program that reads a student's three grades and calculates the
Average final grade */

#include<iostream>
using namespace std;

int main(){
	float grade1, grade2, grade3;
	int averageFinalGrade;
	
	cout<<"Enter grade1: ";
	cin>>grade1;
	cout<<"Enter grade2: ";
	cin>>grade2;
	cout<<"Enter grade3: ";
	cin>>grade3;
	
	averageFinalGrade= (grade1+grade2+grade3)/3;
	
	cout<<"Average final grade:"<<averageFinalGrade;
	
	return 0;
}
