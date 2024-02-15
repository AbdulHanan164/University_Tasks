#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s;
	getline(cin, s);
	cout<<s;
	int y = 0;
	int x=0, max =0,pos=0;
	
	for (int i=0;i<s.length();i++){
		x++;
		if (s[i]==' ' || s[i]=='\0'){
			if (x>max){
				max=x-1;
			}
			x=0;
		}
	}
	
	cout<<endl<<max<<endl;
	return 0;
}
