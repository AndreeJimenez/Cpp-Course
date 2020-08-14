/*4. Write a program that takes the outside temperature every 4 hours,
reading it over a 24 hour period. It should read 6 temperatures.
Calculate the average temperature of the day, the highest and the lowest temperature.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float temperature,sumTemp=0,averageTemp;
	float highTemp=0,lowTemp=999;
	
	for(int i=0;i<24;i+=4){
		cout<<"Enter the temperature at "<<i<<": ";
		cin>>temperature;
		
		sumTemp += temperature;
		
		if(temperature > highTemp){
			highTemp = temperature;
		}
		if(temperature < lowTemp){
			lowTemp = temperature;
		}
	}
	
	averageTemp = sumTemp / 6;
	
	cout<<"\nThe average temperature of the day is: "<<averageTemp<<endl;
	cout<<"The highest temperature is: "<<highTemp<<endl;
	cout<<"The lowest temperature is: "<<lowTemp<<endl;	
	
	getch();
	return 0;
}
