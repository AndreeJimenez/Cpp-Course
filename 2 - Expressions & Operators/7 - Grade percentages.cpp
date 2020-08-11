/*7.A student's final grade is the average of three grades:
the practical that counts 30% of the total, the theoretical that counts
60% and the participation that counts the remaining 10%. Write a program 
that reads the student's three grades and writes their final grade.*/

#include<iostream>
using namespace std;
int main(){
	float practical, theoretical, participation;
	int finalGrade;
	
	cout<<"Enter the practical grade: ";
	cin>>practical;
	cout<<"Enter the theoretical grade: ";
	cin>>theoretical;
	cout<<"Enter the participation grade: ";
	cin>>participation;
	
	practical= practical * 0.30;
	theoretical *=0.60;
	participation *= 0.10;
	
	finalGrade = participation + theoretical + practical;
	 
	 cout<<"Final Grade: "<<finalGrade;
	return 0;
}
