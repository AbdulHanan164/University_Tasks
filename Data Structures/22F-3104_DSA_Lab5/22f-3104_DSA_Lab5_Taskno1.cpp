//#include <iostream>
//using namespace std;
////in this program in which i create a stack which uses LIFO method to perform different operations such as pop to delete last elemnt from the last or push to insert at last 
//class stack {
//private:
//    int top;
//    int rows;
//    int* arr;
//public:
//    stack() {//default constructor where we give default value
//        top = -1;
//        cout << "Enter the number of rows: ";
//        cin >> rows;
//        arr = new int[rows];
//        for (int i = 0; i < rows; i++) {
//            arr[i] = 0;
//        }
//    }
//    bool isEmpty() {//check stack is empty or not
//        return (top == -1);
//    }
//    bool isFull() {//check stack is full or notr
//        return (top == rows - 1);
//    }
//    void push(int val) {//push function to insert at last in the stack
//        if (isFull()) {
//            cout << "Stack is full." << endl;
//        }
//        else {
//            top++;
//            arr[top] = val;
//        }
//    }
//    int pop() {//delete element at the last of the stack
//        if (isEmpty()) {
//            cout << "Stack is empty." << endl;
//            return 0;
//        }
//        else {
//            int popValue = arr[top];
//            arr[top] = 0;
//            top--;
//            return popValue;
//        }
//    }
//    void display() {//display the stack 
//        cout << "All values in the stack are:" << endl;
//        for (int i = top; i >= 0; i--) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    ~stack() {
//        delete[] arr;
//    }
//};
//int main() {
//    stack s1;
//    int num = 0;
//    do {
//        cout << "Enter your choice (1: Push, 2: Pop, 3: Check if empty, 4: Check if full,5:display 0: Exit): ";//menu driven
//        cin >> num;
//
//        if (num == 1) {//choices given to choose from menu
//            cout << "Enter number you want to push: ";
//            int num;
//            cin >> num;
//            s1.push(num);
//        }
//        else if (num == 2) {
//            s1.pop();
//        }
//        else if (num == 3) {
//            if (s1.isEmpty()) {
//                cout << "Stack is empty :" << endl;
//            }
//            else {
//                cout << "Stack is not empty :" << endl;
//            }
//        }
//        else if (num == 4) {
//            if (s1.isFull()) {
//                cout << "Stack is full :" << endl;
//            }
//            else {
//                cout << "Stack is not full :" << endl;
//            }}
//        else if (num == 5) {
//            cout << "print the Stack :" << endl;
//            s1.display();
//        }
//        
//    } while (num != 0);
//    return 0;
//}
