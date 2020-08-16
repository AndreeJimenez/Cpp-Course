/*7. Define a structure that indicates the time spent by a cyclist in
a stage. The structure must have three fields: hours, minutes, and seconds.
Write a program that given n stages calculates the total time spent in
run all stages.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct cyclistTime{
	int hours;
	int minutes;
	int seconds;
}stage[10];

int main(){
	int n_stages,totalHours=0,totalMinutes=0,totalSeconds=0;
	
	cout<<"Enter the number of stages: ";
	cin>>n_stages;
	
	cout<<"\nEnter the time obtained:"<<endl;
	
	for(int i=0;i<n_stages;i++){
		cout<<i+1<<". Hours: "; cin>>stage[i].hours;
		cout<<i+1<<". Minutes: "; cin>>stage[i].minutes;
		cout<<i+1<<". Seconds: "; cin>>stage[i].seconds;
		
		totalHours = totalHours+stage[i].hours; 
		totalMinutes = totalMinutes+stage[i].minutes;
		if(totalMinutes>=60){
			totalMinutes-=60;
			totalHours++;
		}
		totalSeconds = totalSeconds+stage[i].seconds;
		if(totalSeconds>=60){
			totalSeconds-=60;
			totalMinutes++;
		}
		cout<<"\n";
	}
	
	cout<<"\nTotal time: "<<endl;
	cout<<"Hours: "<<totalHours<<endl;
	cout<<"Minutes: "<<totalMinutes<<endl;
	cout<<"Seconds: "<<totalSeconds<<endl;
	
	getch();
	return 0;
}
