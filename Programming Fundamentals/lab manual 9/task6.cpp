#include <iostream>
using namespace std;
int main()
{
int num;
bool a=false;
cin>>num;
while(num!=0){
	cin>>num;
	if(num%2==0||num%3==0)
	{
		cout<<"number is divisble by 2 and 3";
		continue;
		
	}
	else if(num<0)
	{
		cout<<"Negative number";
		a=true;
	}
}
	num++;
cout<<num;
}
