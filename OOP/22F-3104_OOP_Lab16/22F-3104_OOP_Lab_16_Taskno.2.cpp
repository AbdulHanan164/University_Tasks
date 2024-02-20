//#include <iostream>
//using namespace std;
//class divide {
//private:
//	double Dividend,Divisor;
//public:
//	divide(double Di, double Dv) :Dividend(Di), Divisor(Dv) {//Parameterized constructor
//		if (Divisor == 0) {//if divisor == 0
//			throw std::invalid_argument("We cannot Divide a number by zero.");//throw warning if condition is true
//
//		}
//
//	}
//	void display() {//Method to display Divison
//		cout << Dividend / Divisor;
//	}
//
//};
//int main() {
//	try {//Using the catching of Exceptions
//		divide obj(10, 5);//Valid Argument
//		cout << "Number After Division is :";
//		obj.display();
//		cout << "\nAfer dividing a number by zero";
//		divide obj2(10, 0);//Invalid Argument
//		obj2.display();
//	}
//	catch(const std::invalid_argument &Divide){
//		cout << "\nAn Exception Occor!  " << Divide.what();
//	}
//	return 0;
//}