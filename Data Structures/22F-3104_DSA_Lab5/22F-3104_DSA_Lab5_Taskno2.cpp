//#include <iostream>
//using namespace std;
//class TwoStacks {
//private:
//    int* arr; 
//    int size; 
//    int top1; 
//    int top2; 
//public:
//    TwoStacks(int rows) {
//        size = rows;
//        arr = new int[rows];
//        top1 = -1; // Initialize top pointer for the first stack
//        top2 = size; // Initialize top pointer for the second stack
//    }
//    // Push an element to the first stack
//    void push1(int val) {
//        if (top1 < top2 - 1) { // Check if there is space for the first stack
//            ++top1;
//            arr[top1] = val;
//        }
//        else {
//            cout << "Stack 1 is full." << endl;
//        }
//    }
//    // Push an element to the second stack
//    void push2(int val) {
//        if (top1 < top2 - 1) { // Check if there is space for the second stack
//            top2--;
//            arr[top2] = val;
//        }
//        else {
//            cout << "Stack 2 is full." << endl;
//        }
//    }
//    // Pop an element from the first stack and return it
//    int pop1() {
//        if (top1 >= 0) { // Check if the first stack is not empty
//            return arr[top1--];
//        }
//        else {
//            cout << "Stack 1 is empty." << endl;
//            return -1; // Return a sentinel value that empty stack
//        }
//    }
//    // Pop an element from the second stack and return it
//    int pop2() {
//        if (top2 < size) { // Check if the second stack is not empty
//            return arr[top2++];
//        }
//        else {
//            cout << "Stack 2 is empty." << endl;
//            return -1; // Return a sentinel value to indicate an empty stack
//        }
//    }
//    void display() {
//        // Print stack 1:
//        cout << "Stack 1 is: ";
//        for (int i = 0; i <= top1; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//        // Print stack 2:
//        cout << "Stack 2 is: ";
//        for (int i = top2; i < size; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    ~TwoStacks() {
//        delete[] arr;
//    }
//};
//int main() {
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//    TwoStacks ts(size);
//    int choice;
//    do {
//        cout << "Enter your choice (1: Push, 2: Pop, 3: Display, 0: Exit): ";
//        cin >> choice;
//        if (choice == 1) {
//            cout << "Enter which stack you want to push value (1 for stack 1, 2 for stack 2): ";
//            int stackNum;
//            cin >> stackNum;
//            if (stackNum == 1) {
//                cout << "Enter number you want to push in stack 1: ";
//                int num1;
//                cin >> num1;
//                ts.push1(num1);
//            }
//            else if (stackNum == 2) {
//                cout << "Enter number you want to push in stack 2: ";
//                int num2;
//                cin >> num2;
//                ts.push2(num2);
//            }
//        }
//        else if (choice == 2) {
//            cout << "Enter which stack you want to pop from (1 for stack 1, 2 for stack 2): ";
//            int stackNum;
//            cin >> stackNum;
//            if (stackNum == 1) {
//                int poppedValue = ts.pop1();
//                if (poppedValue != -1) {
//                    cout << "Popped value from stack 1: " << poppedValue << endl;
//                }
//            }
//            else if (stackNum == 2) {
//                int poppedValue = ts.pop2();
//                if (poppedValue != -1) {
//                    cout << "Popped value from stack 2: " << poppedValue << endl;
//                }
//            }
//        }
//        else if (choice == 3) {
//            ts.display();
//        }
//    } while (choice != 0);
//
//    return 0;
//}
