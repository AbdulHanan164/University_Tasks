//#include <iostream>
//#include <string> // Added to use string type
//using namespace std;
//
//class measure {
//private:
//	float length, feet, inches, total, centimeter;
//public:
//	measure() {}
//	measure(float len, float fee, float inch, float cm) {
//		length = len;
//		feet = fee;
//		inches = inch;
//		centimeter = cm;
//	}
//	float len_into_feet() {
//		feet = length * 0.0328;
//		return feet;
//	}
//	float len_into_inches() {
//		inches = length / 12;
//		return inches;
//	}
//	float len_into_centi() {
//		centimeter = length * 100;
//		return centimeter;
//	}
//	void test() {
//		try {
//			string warning = "Wrong input try again !";
//			if (length < 0 || feet < 0 || inches < 0 || centimeter < 0) { // Changed to use OR operator and removed infinite loop
//				
//				throw warning; // Changed to throw a string instead of a float
//			}
//			else if ((inches >=char(47)&&inches<=char(127))&& (length >= char(47) && length <= char(127))&& (feet >= char(47) && feet <= char(127))&& (centimeter >= char(47) && centimeter <= char(127))) {
//				throw warning;
//			}
//			else {
//				cout << "The inches = " << len_into_inches() << endl;
//			}
//		}
//		catch (string& msg) { // Catching a string instead of a float
//			cout <<"Inches are ;" << inches << endl;
//			cout <<"\n Centimeters are" << centimeter;
//		}
//	}
//};
//
//int main() {
//	float a, b, c, d;
//	cout << "Enter value of length: "; cin >> a;
//	cout << "Enter value of feet: "; cin >> b;
//	cout << "Enter value of inches: "; cin >> c;
//	cout << "Enter value of centimeter: "; cin >> d; // Added a missing input prompt
//	measure obj(a, b, c, d); // Creating a measure object with constructor arguments
//	obj.test(); // Calling the test() function on the measure object
//	return 0;
//}
