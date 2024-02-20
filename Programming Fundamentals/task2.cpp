#include <iostream>
#include<string>
using namespace std;
int main()
{
string str;
char temp[20];
getline(cin,str);
for(int i=0;i<str.length();i++)
{
	for(int j=0;j<str.length();j++){
	
	temp [i]= str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp[i];	
	}
	}
	cout<<str;
	
}
