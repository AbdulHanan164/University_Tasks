//#include <iostream>
//using namespace std;
//// Function to check if a number is binary
//bool isBinary(long n) {
//    while (n > 0) {
//        int digit = n % 10;
//        if (digit != 0 && digit != 1) {
//            return false; // It is not a binary number
//        }
//        n /= 10;
//    }
//    return true; // It is a binary number
//}
//// Function to convert a binary number to decimal
//int BinaryToDecimal(long n) {
//    int dec = 0, i = 0, rem;
//    while (n != 0) {
//        rem = n % 10;
//        n /= 10;
//        dec += rem * pow(2, i);
//        ++i;
//    }
//    return dec;
//}
//int main() {
//    long n;
//    while (true) {
//        cout << "Enter a binary number: ";
//        cin >> n;
//
//        if (isBinary(n)) {
//            cout << "The Decimal of " << n << " Binary is : " << BinaryToDecimal(n) << endl;
//        }
//        else {
//            cout << "Not a binary number." << endl;
//        }
//    }
//    return 0;
//}
