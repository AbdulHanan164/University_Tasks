#include <iostream>
using namespace std;
int main()
{
	int num,n,reminder,rev=0;
	char size;
	cin>>size;
	char arr[size];
	for(char i=0;i<0;i++)
	{
		cin>>arr[i];
	}
	{

while(arr[size]!=0){
	reminder=arr[size]%10;
	rev=(rev*10)+reminder;
	arr[size]=arr[size]/10;
}
if(arr[size]==rev)
{
cout<<" Palindrome:";
}
else{
	cout<<" not Palindrome";
}
return 0;
}
	
}
