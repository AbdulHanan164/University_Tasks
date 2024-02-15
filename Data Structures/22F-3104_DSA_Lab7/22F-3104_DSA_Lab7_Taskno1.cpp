//#include <iostream>
//#include<string>
//using namespace std;
//// A recursive function that check palindrome or not
//bool isPal(char str[],int str1, int element)
//{
//    // If there is only one character
//    if (str1 == element)
//        return true;
//    // If first and last
//    // characters do not match
//    if (str[str1] != str[element])
//        return false;
//    if (str1 < element + 1)
//        return isPal(str, str1 + 1, element - 1);
//    return true;
//}
//bool isPalindrome(char str[])
//{
//    int n = strlen(str);// An empty string is considered as palindrome
//    if (n == 0)
//        return true;
//    return isPal(str, 0, n - 1);
//}
//int main()
//{
//    while (true) {
//        char str[100];
//        cout << "Enter String :";
//        cin >> str;
//        if (isPalindrome(str))
//            cout << "Palindrome :"<<endl;
//        else
//            cout << "Not a Palindrome :"<<endl;
//        }
//    return 0;
//}