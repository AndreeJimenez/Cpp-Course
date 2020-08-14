/*15. Make a program that prompts the user to think of a whole number
between 1 and 100. The program must generate a random number in that same
range [1-100], and indicate to the user if the number that digit is lower or higher
to the random number. Finally show him the number of attempts that it takes.

variable = lower_limit + rand ()% (upper_limit +1 - lower_limit);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int number,random,count=0;
	
	srand(time(NULL)); //generate a random number between 1-100
	random = 1 + rand()%(101-1);
	
	do{
		cout<<"Enter a number: "; cin>>number;
		if(number>random){
			cout<<"It is a smaller number\n";
		}
		else if(number<random){
			cout<<"It is a greater number\n";
		}
		count++;
	}while(number != random);
	
	cout<<"\n¡CONGRATULATIONS YOU GUESSED THE NUMBER!"<<endl;
	cout<<"Number of attempts: "<<count<<endl;
	
	
	system("pause");
	return 0;
}
