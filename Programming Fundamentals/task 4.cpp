#include <iostream>
using namespace std;
int main()
{
	int e,b,a,total;
	cout<<"Enter Base of number";
	cin>>b;
	cout<<"Enter power of number";
	cin>>e;
for(a=0;a<e;a++)
{
	total=total*b;
	cout<<total<<endl;
}	



	return 0;
}
