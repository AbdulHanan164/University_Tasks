#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int guessnum,correctnum,a;
	bool guess=false;
	srand(time(0));
	correctnum=rand()%100;
	a=0;
	do{
	cout<<"Enter any number between 0 to 100";
	cin>>guessnum;
	if(guessnum==50){
		cout<<"ENter number is Average"<<endl;
	}
	else if(guessnum==correctnum)
	{
		
		cout<<"Hurray! You guessed rightly"<<endl;
		guess=true;
	}
	else if(guessnum>correctnum)
	{
		if(guessnum>50){
		cout<<"Number is greater than 50"<<endl;
	}
	else {
		cout<<"Number is less than 50"<<endl;
	}
}
a++;
}
while(a<100);
return 0;
}
