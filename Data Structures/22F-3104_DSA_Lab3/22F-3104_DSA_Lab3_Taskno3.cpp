//#include <iostream>
//using namespace std;
//// Define a class for a linked list node
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int val) {
//        data = val;
//        next = NULL;
//    }
//};
//// Define a class for a linked list
//class LinkedList {
//public:
//    Node* head;
//    LinkedList() {
//        head = NULL;
//    }
//    // Function to insert a new node at the end of the linked list
//    void insert(int val) {
//        Node* newNode = new Node(val);
//        if (head == NULL) {
//            head = newNode;
//            return;
//        }
//        Node* temp = head;
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//        temp->next = newNode;
//    }
//    // Function to concatenate the second list to the first list
//    void concatenate(LinkedList& secondList) {
//        if (head == NULL) {
//            head = secondList.head;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != NULL) {
//                temp = temp->next;
//            }
//            temp->next = secondList.head;
//        }
//        secondList.head = NULL; // Set the second list to an empty list
//    }
//    // Function to display the elements of the linked list
//    void display() {
//        Node* temp = head;
//        while (temp != NULL) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << "NULL" << endl;
//    }
//};
//int main() {
//    LinkedList list1;
//    LinkedList list2;
//
//    // Insert elements into the first list
//    list1.insert(1);
//    list1.insert(2);
//    list1.insert(3);
//    // Insert elements into the second list
//    list2.insert(4);
//    list2.insert(5);
//    list2.insert(6);
//    cout << "List 1: ";
//    list1.display();
//    cout << "List 2: ";
//    list2.display();
//    // Concatenate the second list to the first list
//    list1.concatenate(list2);
//    cout << "Concatenated List: ";
//    list1.display();
//    return 0;
//}
