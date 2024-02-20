#include<iostream>
using namespace std;
int main()
{
int y=1;
int total=0,x;
for( x=1;x<=5;x++)
{
	y*=x;
	cout<<y<<endl;
	total+=y;
	if(x%2==0)
	{
		total*=2;}
		else{
				total/=2;
				}
		
			
}cout<<x<<" "<<y<<" "<<total;
		
 return 0;
}
