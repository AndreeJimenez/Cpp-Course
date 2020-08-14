/*14. In a class of 5 students, three exams have been taken and it is required
determine the number of:
	a) Students who passed all exams.
	b) Students who passed at least one exam.
	c) Students who only passed the last exam.

Make a program that allows the reading of the data and the calculation of the
statistics.  [0 / 100]
*/

#include<iostream>

using namespace std;

int main(){
	int exam1,exam2,exam3;
	int allPassed=0, atLeastOne=0,lastOnly=0;
	
	for(int i=1;i<=5;i++){
		cout<<i<<". Enter the grade of the first exam: "; cin>>exam1;
		cout<<i<<". Enter the grade of the second exam: "; cin>>exam2;
		cout<<i<<". Enter the grade of the third exam: "; cin>>exam3;
		cout<<"\n";
		
		if((exam1>60)&&(exam2>60)&&(exam3>60)){
			allPassed++;
		}
		
		if((exam1>60)||(exam2>60)||(exam3>60)){
			atLeastOne++;
		}
		
		if((exam1<60)&&(exam2<60)&&(exam3>60)){
			lastOnly++;
		}
	}
	
	cout<<"\na) They passed all exams: "<<allPassed;
	cout<<"\nb) They passed at least one exam: "<<atLeastOne;
	cout<<"\nc) They only passed the last exam: "<<lastOnly;
	
	
	return 0;
}
