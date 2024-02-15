//#include <iostream>
////in this program i create a stack using link list perfroming the same operation as stack but by using singly link list
//using namespace std;
//class StackNode {//create Nodestack
//public:
//    int data;
//    StackNode* next;
//    StackNode(int val) {
//        data = val;
//        next = nullptr;
//    }
//};
//class Stack {
//public:
//    StackNode* top;
//    Stack() {
//        top = nullptr;
//    }
//    void Push(int val) {//push value in the link list at the tail
//        StackNode* newNode = new StackNode(val);
//        newNode->next = top;
//        top = newNode;
//    }
//    void Pop() {//pop value in the link list at the last of the link list
//        if (IsEmpty()) {
//            cout << "Stack is empty. Cannot pop" << endl;
//            return;
//        }
//        StackNode* temp = top;
//        top = top->next;
//        delete temp;
//    }
//    bool IsEmpty() {//check list is empty or not
//        return top == nullptr;
//    }
//    void Display_stack() {//display the stack
//        if (IsEmpty()) {
//            cout << "Stack is empty." << endl;
//            return;
//        }
//        StackNode* current = top;
//        cout << "Stack: ";
//        while (current != nullptr) {
//            cout << current->data << " ";
//            current = current->next;
//        }
//        cout << endl;
//    }
//    void Reverse_stack() {//reverse the linklist as keeping the functionality of stack
//        StackNode* prev = nullptr;
//        StackNode* current = top;
//        StackNode* next = nullptr;
//
//        while (current != nullptr) {
//            next = current->next;
//            current->next = prev;
//            prev = current;
//            current = next;
//        }
//        top = prev;
//    }
//};
//int main() {
//    Stack stack;
//    int choice;
//    int num;
//
//    do {//menu driven of the program
//        cout << "Press 1: Push, 2: Pop, 3: IsEmpty, 4: Reverse_Stack, 5: Display_Stack, 0: Exit: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter number to push in the stack: ";
//            cin >> num;
//            stack.Push(num);
//            break;
//        case 2:
//            stack.Pop();
//            break;
//        case 3:
//            if (stack.IsEmpty()) {
//                cout << "Stack is empty." << endl;
//            }
//            else {
//                cout << "Stack is not empty." << endl;
//            }
//            break;
//        case 4:
//            stack.Reverse_stack();
//            break;
//        case 5:
//            stack.Display_stack();
//            break;
//        case 0:
//            cout << "Exiting the program." << endl;
//            break;
//        default:
//            cout << "Invalid choice. Try again." << endl;
//        }
//    } while (choice != 0);
//
//    return 0;
//}
