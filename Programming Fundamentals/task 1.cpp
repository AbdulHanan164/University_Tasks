#include <iostream>
using namespace std;
int main()
{
	int y=1;
	int x=1;
	int total=0;
	while(x<=5)
	{
		y=x*x;
		cout<<y<<endl;
		total+=y;
		x++;
	}
	cout<<"total is:"<<total<<endl;
	return 0;
}
