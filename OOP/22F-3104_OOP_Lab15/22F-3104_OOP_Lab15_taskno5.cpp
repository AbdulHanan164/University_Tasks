#include <iostream>
template<typename T>
class caculator {//class calculator
public:
	T sum(T a, T b) {//Template for sum
		T total = 0;
			total = a + b;
		return total;//return sum
	}
	T sub(T a, T b) {//template for subtraction
		T total = 0;
			total = a - b;
		return total;//return values after subtraction
	}
	T Division(T a, T b) {//template for Division
		T total = 0;
			total = a / b;
		return total;//return divison
	}
	T Multiplication(T a, T b) {//template for Multiplication
		T total = 0;
			total = a * b;
		return total;//return Multplication
	}
	T Average(T arr[], T s) {//Template for Average
		T total = 0;
		for (int i = 0; i < 4; i++) {
			total = total + arr[i];
		}
		return total / 4;//return Average
	}
};
int main() {
	caculator <int>obj;
	int arr[4];
	for (int i = 0; i < 4; i++) {//loop which inputs the values
		std::cout << "Enter index no [" << i << "] =";
		std::cin >> arr[i];
	}
	std::cout << "\nAverage is :" << obj.Average(arr, 4);
	int a, b;
	std::cout << "\nEnter two numbers to  values :";
	std::cin >> a >> b;
	std::cout << "\nSum is :" << obj.sum(a,b);
	std::cin >> a >> b;
	std::cout << "\nSubtraction is :" << obj.sub(a, b);
	std::cin >> a >> b;
	std::cout << "\nDivision is :" << obj.Division(a, b);
	std::cin >> a >> b;
	std::cout << "\nMultiplication is :" << obj.Multiplication(a, b);
	return 0;
}