//#include <iostream>
//using namespace std;
//class node {
//public:
//    char data;
//    node* next;
//    // Constructor to initialize a node with a given value
//    node(char val) {
//        data = val;
//        next = NULL;
//    }
//};
//class LinkedList {
//public:
//    node* head;
//    // Constructor to initialize the linked list with an empty head
//    LinkedList() {
//        head = NULL;
//    }
//    // Function to insert a new node at the end of the linked list
//    void insert(char val) {
//        node* newNode = new node(val);
//        // If the list is empty set the new node as the head
//        if (head == NULL) {
//            head = newNode;
//            return;
//        }
//        // Traverse the list to find the last node and link the new node
//        node* temp = head;
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//        temp->next = newNode;
//    }
//    // Function to reverse the linked list
//    void reverse() {
//        node* prev = NULL;
//        node* current = head;
//        node* nextNode = NULL;
//        // Reverse the links between nodes to reverse the list
//        while (current != NULL) {
//            nextNode = current->next;
//            current->next = prev;
//            prev = current;
//            current = nextNode;
//        }
//        // Update the head to point to the new first node
//        head = prev;
//    }
//    // Function to create a copy of the linked list
//    LinkedList copy() {
//        LinkedList newList;
//        node* temp = head;
//        // Traverse the original list and insert each element into the new list
//        while (temp != NULL) {
//            newList.insert(temp->data);
//            temp = temp->next;
//        }
//        return newList;
//    }
//    // Function to display the elements of the linked list
//    void display() {
//        node* temp = head;
//        // Traverse the list and print each element
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
//    // Insert 15 characters into the first list 
//    for (char i = 'A'; i <= 'O'; i++) {
//        list1.insert(i);
//    }
//    // Display the original list
//    cout << "Original List: ";
//    list1.display();
//    // Create a copy of the first list in reverse order
//    list2 = list1.copy();
//    list2.reverse();
//    // Display the reversed copy
//    cout << "Reversed Copy: ";
//    list2.display();
//    return 0;
//}
