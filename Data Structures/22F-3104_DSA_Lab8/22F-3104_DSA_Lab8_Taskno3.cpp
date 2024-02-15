#include <iostream>
using namespace std;
string decimalToOctal(int decimal, int base) {
    if (decimal == 0) {
        return "";
    }
    int remain = decimal % base;
    if (remain < 10) {
        return decimalToOctal(decimal / base, base) + char('0' + remain);
    }
    else {
        return decimalToOctal(decimal / base, base) + char('A' + remain - 10);
    }
}
int main() {
    int decimal_Num, base_num;
    cout << "Enter a decimal number: ";
    cin >> decimal_Num;
    cout << "Enter 8 for octal or 16 for hexadecimal: ";
    cin >> base_num;

    if (base_num == 8) {
        cout << decimal_Num << " in octal is: " <<decimalToOctal(decimal_Num, 8) << endl;
    }
    else if (base_num == 16) {
        cout << decimal_Num << " in hexadecimal is:" <<decimalToOctal(decimal_Num, 16)  << endl;
    }
    else {
        cout << "Invalid base number" << endl;
    }

    return 0;
}
