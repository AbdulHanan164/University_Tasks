//#include <iostream>
//using namespace std;
//template <class T>
//class myIncrement {//class name of myIncrement
//    T value;
//public:
//    myIncrement(T arg) { value = arg; }//default constructor intialize value of value 
//    T toIncrement() { return ++value; }//returns value and increment it
//};
//template <>
//class myIncrement <char> {//change integer into charater
//    char value;
//public:
//    myIncrement(char arg) { value = arg; }
//    char uppercase() {//Convert smaller number into Upper case 
//        if ((value >= 'a') && (value <= 'z')) {
//            value += 'A' + 'a';
//            return value;
//        }
//    }
//};
////the actual error was in the main function
//// myIncrement<int> myint(7);
////myIncrement<char> mychar('s');
////myIncrement<double> mydoubler(11.0);
//int main()
//{
//    myIncrement<int> myint(7);
//    myIncrement<char> mychar('s');
//    myIncrement<double> mydouble(11.0);
//    //the error is in the type casting of the variable name
//    cout << "Incremented int value = " << myint.toIncrement() << endl;
//    cout << "Incremented char value = " << mychar.uppercase() << endl;
//    cout << "Incremented double value = " << mydouble.toIncrement() << endl;
//    return 0;
//
//}