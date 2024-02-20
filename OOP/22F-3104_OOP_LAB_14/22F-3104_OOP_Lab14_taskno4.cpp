//#include <iostream>
//template<typename T>
//T greater(T& a, T& b, T& c, T& d) {//using template
//	if (a > b && a > c && a > d) {//checking conditions to check greater number
//		std::cout <<a<< " is greater :";
//		return a;
//	}
//	else if (b > a && b > c && b > d) {
//		std::cout <<b << " is greater :";
//		return b;
//	}
//	else if (c > a && c > b && c > d) {
//		std::cout <<c<< " is greater :";
//		return c;
//	}
//	else {
//		std::cout <<d<< " is greater :";
//		return d;
//	}
//
//}
//int main() {
//	std::cout << "Integer :" << std::endl;//using template for integer
//	int a = 3, b = 4, c = 5, d = 6;
//	std::cout<<greater(a, b, c, d);
//	std::cout << "\nDouble :" << std::endl;
//	double e = 3.45, f = 55.4, g = 25.5, h = 145.6;//using template for double
//	std::cout << greater(e, f, g, h);
//
//	return 0;
//}