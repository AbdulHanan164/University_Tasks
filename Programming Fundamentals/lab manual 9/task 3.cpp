#include <iostream>
using namespace std;
int main()
{
	int students,average,total=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Marks of student number# "<<i<<endl;
		cin>>students;
		total=total+students;
	average=total/10;
	}
	
	cout<<"Average is";
	cout<<average;
	return 0;
}
