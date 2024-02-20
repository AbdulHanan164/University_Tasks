#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[20];
    int length;
    bool a= false;
    cout << "Enter a Value "; 
	cin >> str1;
    length = strlen(str1);
    for(int i=0;i < length ;i++){
        if(str1[i] != str1[length-i-1]){
        	a=true;
            break;
           }
        }
    
    if (a) {
        cout << str1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << str1 << " is a palindrome" << endl; 
    }
    return 0;
}
