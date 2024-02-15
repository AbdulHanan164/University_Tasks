//#include <iostream>
//using namespace std;
////in this code i create a double link in which node points to the next node and pervious points to the node current and copy pointer head tail size in copy constructor and intialize it by deap copy
//class Node {
//public:
//    int data;
//    Node* next;
//    Node* prev;
//    // Constructor to initialize the data and pointers
//    Node(int value)
//    {
//        data = value;
//        next = nullptr;
//        prev = nullptr;
//    }
//};
//class double_link {
//public:
//    Node* head;
//    Node* tail;
//    int size;
//    // Constructor to initialize the linked list
//    double_link()
//    {
//        head = nullptr;
//        tail = nullptr;
//        size = 0;
//    }
//    // Copy constructor to create a new linked list by copying elements from another list.
//    double_link(double_link& obj) : head(nullptr), tail(nullptr), size(0) {
//        Node* current = obj.head;
//        while (current != nullptr) {
//            push_back(current->data);
//            current = current->next;
//        }
//    }
//    // Function to add a new element to the end of the list.
//    void push_back(int value) {
//        Node* newNode = new Node(value);
//        if (tail == nullptr) {
//            head = tail = newNode;
//        }
//        else {
//            newNode->prev = tail;
//            tail->next = newNode;
//            tail = newNode;
//        }
//        size++;
//    }
//    // Function to print the elements in the list.
//    void display() {
//        Node* temp = head;
//        while (temp != nullptr) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//};
//int main() {
//    double_link originalList;
//    int num = 0;
//    // Input loop to read integers from the user and add them to the originalList.
//    while (num != -1) {
//        cout << "Enter nodes -1 to exit : ";
//        cin >> num;
//        if (num != -1) {
//            originalList.push_back(num);
//        }
//        else {
//            break;
//        }
//    }
//    // Create a copiedList by using the copy constructor.
//    double_link copiedList(originalList);
//    // Print the original and copied lists to verify the copying process.
//    cout << "Original List: ";
//    originalList.display();
//    cout << "Copied List: ";
//    copiedList.display();
//
//    return 0;
//}
