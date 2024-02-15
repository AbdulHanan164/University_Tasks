//#include <iostream>
//using namespace std;
////in this i create a linklist using stack method to calculate the grocery shop 
//class StackNode {
//public:
//    string item;
//    double price;
//    StackNode* next;
//    StackNode(const string& itemName, double itemPrice) {//parameterized constructor to intialize the value
//        item = itemName;
//        price = itemPrice;
//        next = nullptr;
//    }
//};
//class Stack {
//public:
//    StackNode* top;
//    Stack() {
//        top = nullptr;
//    }
//    void Push(string& itemName, double itemPrice) {//function to push element in the 
//        StackNode* newNode = new StackNode(itemName, itemPrice);
//        newNode->next = top;
//        top = newNode;
//    }
//    void Pop() {//pop the element in ths stack 
//        if (IsEmpty()) {
//            cout << "Shopping list is empty" << endl;
//            return;
//        }
//        StackNode* temp = top;
//        top = top->next;
//        delete temp;
//    }
//    bool IsEmpty() {//check it is empty or not
//        return top == nullptr;
//    }
//    void Peek() {//check next item which is remaining in this list
//        if (IsEmpty()) {
//            cout << "Shopping list is empty." << endl;
//        }
//        else {
//            cout << "Next item to purchase: " << top->item << " " << top->price << endl;
//        }
//    }
//    void ListItems() {//display the list of elements in the stack
//        if (IsEmpty()) {
//            cout << "Shopping list is empty." << endl;
//            return;
//        }
//        cout << "Shopping list:" << endl;
//        StackNode* current = top;
//        while (current != nullptr) {
//            cout << current->item << " " << current->price << " " << endl;
//            current = current->next;
//        }
//    }
//    double CalculateBill() {//calcualte the total bill 
//        double totalBill = 0.0;
//        StackNode* current = top;
//        while (current != nullptr) {
//            totalBill += current->price;
//            current = current->next;
//        }
//        return totalBill;
//    }
//};
//int main() {
//    Stack shoppingList;
//    int choice;
//    string item;
//    double price;//menu driven program
//    do {
//        cout << "1: insert item, 2: Pop item, 3: check next item, 4: Is Empty, 5:Print List Items, 6: Calculate Bill, 0: Exit: ";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter item name: ";
//            cin >> item;
//            cout << "Enter item price: ";
//            cin >> price;
//            shoppingList.Push(item, price);
//            break;
//        case 2:
//            shoppingList.Pop();
//            break;
//        case 3:
//            shoppingList.Peek();
//            break;
//        case 4:
//            if (shoppingList.IsEmpty()) {
//                cout << "Shopping list is empty." << endl;
//            }
//            else {
//                cout << "Shopping list is not empty." << endl;
//            }
//            break;
//        case 5:
//            shoppingList.ListItems();
//            break;
//        case 6:
//            cout << "Total bill: " << shoppingList.CalculateBill() << endl;
//            break;
//        case 0:
//            cout << "Exiting the shopping list app." << endl;
//            break;
//        default:
//            cout << "Invalid choice Try again." << endl;
//        }
//    } while (choice != 0);
//    return 0;
//}