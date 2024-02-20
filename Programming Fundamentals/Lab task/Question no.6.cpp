#include <iostream>
using namespace std;
int main()
{
int num1,reminder,rev=0,digits,rem2,rem3,rem4;
cout<<"Enter Three Numbers";
cin>>num1;
reminder=num1%10;
	rev=(rev*10)+reminder;
	num1=num1/10;
	reminder=num1%10;
	rev=(rev*10)+reminder;
	num1=num1/10;
	reminder=num1%10;
	rev=(rev*10)+reminder;
	rem2=rev%10;
	rem2/10;
	rem3=rem2/100%10;
	rem4=rem3/1000%10;

	cout<<rem2<<rem3<<rem4<<endl;

	return 0;

}
