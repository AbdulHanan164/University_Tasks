#include<algorithm>
#include <iostream>
#include <string>
using namespace std;
int main()
{

 string s = "kjhsjd";
sort(s.begin(),s.end(),greater<char>());
cout<<s;
    
}
