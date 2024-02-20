#include <iostream>
using namespace std;
int main()
{
	int rows ,colums;
	cout<<"Enter Rows";
	cin>>rows;
	cout<<"Enter colums";
	cin>>colums;
	int arr[rows][colums];
	for(int i=0;i<rows;i++){
		for(int j=0;j<colums;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix is \n";
	for(int i=0;i<rows;i++){
		for(int j=0;j<colums;j++){
			cout<<arr[i][j]<<"  ";
		}cout<<endl;
	}
	cout<<"dignol Enteries are:\n";
	for(int i=0;i<rows;i++){
		for(int j=0;j<colums;j++){
			if(arr[i]==arr[j])
			cout<<arr[i][j]<<" ";
			else {
			
			cout<<'0'<<" ";}
		}
		cout<<endl;
	}
	

	return 0;
}
