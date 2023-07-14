#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand((unsigned int)time(NULL));
	int number=(rand()%100)+1;
	int guess=0;
	do{
		cout <<"guess a number between 1-100:";
		cin >>guess;
		
		if(guess>number)
		cout<<"guess a smaller number"<<endl;
		else if(guess<number)
		cout<<"guess a larger number"<<endl;
		else
		cout<<"YOU WON"<<endl;
	}
	while(guess!=number);
}
