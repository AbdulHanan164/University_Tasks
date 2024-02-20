#include <iostream>
#include<string>
using namespace std;
int main()
{
	char b,c;
	char space=32;
	string str,temp;
	getline(cin,str);
	for(int i=0;i<=str.length();i++)
	{
		if(str[i]==space||str[i]=='\0')
		{
			temp[i]=str[i];
			str[i]=str[i+1];
			str[i+1]=temp[i];
		}
	}cout<<temp;
	
	
}
