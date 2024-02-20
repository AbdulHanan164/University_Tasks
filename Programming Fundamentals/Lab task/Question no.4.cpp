#include <iostream>
using namespace std;
int main()
{
	int num1;
	cout<<"Enter one Numbers 3 or 4\n";
	int count=0;
	while(count<1){
	cin>>num1;
	if(num1==3||num1==4)
	{
		if(num1==3)
		{
			cout<<num1+1<<endl;
		}
		else if(num1==4)
		{
			cout<<num1-1<<endl;
			break;
		}
		}
		else
		{
			cout<<"Try again by putting 3 or 4";
			break;
		}
	
}
	return 0;
}
