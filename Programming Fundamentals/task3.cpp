#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[20] ;char str1[20];
	cout<<"Enter first array";
	cin>>str;
	cout<<"Enter second Array";
	cin>>str1;
	cout<<strcat(str,str1);
}
