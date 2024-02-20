//#include <iostream>
//using namespace std;
//
//class Rectangle {
//private:
//    float length, width;
//public:
//    Rectangle(float l, float w) : length(l), width(w) {
//        if (length <= 0 || width <= 0) {
//            throw std::invalid_argument("Length and width must be positive");
//        }
//    }
//
//    float get_area() {
//        return length * width;
//    }
//};
//
//class Circle {
//private:
//    float radius;
//public:
//    Circle(float r) : radius(r) {
//        if (radius <= 0) {
//            throw std::invalid_argument("Radius must be positive");
//        }
//    }
//
//    float get_area() {
//        return 3.14 * radius * radius;
//    }
//};
//
//int main() {
//    try {
//        cout << "The value of rectangle:\n";
//        Rectangle r1(5.12, 6.21);
//        cout << r1.get_area() << endl;  // Valid Argument
//        Rectangle r2(-12.1, 0);
//        cout << r2.get_area() << endl;  // Invalid Argument
//    }
//    catch (const std::invalid_argument& e) {
//        cout << "Error: " << e.what() << endl;
//    }
//
//    try {
//        cout << "The value of circle:\n";
//        Circle c1(5.12);
//        cout << c1.get_area() << endl;  // Valid Argument
//        Circle c2(0);
//        cout << c2.get_area() << endl;  // Invalid Argument
//    }
//    catch (const std::invalid_argument& e) {
//        cout << "Error: " << e.what() << endl;
//    }
//
//    return 0;
//}
