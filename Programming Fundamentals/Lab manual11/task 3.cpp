#include <iostream>
using namespace std;
int main()
{
	int largest=0,largest2=0,size;	
	cout<<"Enter size of Array";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Integer : "<<"At Index"<<i<<" ";
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]>largest)
		largest=arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]>largest2)
		{
		if(arr[i]==largest2){
		continue;
	 	largest2=arr[i];
		}
	}
	
	}
	cout<<"The largest number is"<<largest<<" "<<largest2;
	return 0;
}
