//#include <iostream>
//using namespace std;
////In this task i make a singly link list which points to the next node and next node stores the value in the prevoius node and print the link list in reverse order
//class node {
//public:
//    int data;
//    node* next;
//  //   Constructor to initialize a node with a given value
//    node(int val) {
//        data = val;
//        next = nullptr;
//    }
//};
//class LinkedList {
//public:
//    node* head;
//    // Constructor to initialize the linked list with an empty head
//    LinkedList() {
//        head = nullptr;
//    }
//    // Function to insert a new node at the end of the linked list
//    void insert(int val) {
//        node* newNode = new node(val);
//       //  If the list is empty set the new node as the head
//        if (head == nullptr) {
//            head = newNode;
//            return;
//        }
//       //  Traverse the list to find the last node and link the new node
//        node* temp = head;
//        while (temp->next != nullptr) {
//            temp = temp->next;
//        }
//        temp->next = newNode;
//    }
//   //  Function to reverse the linked list
//    void reverse() {
//        node* previous = nullptr;
//        node* current = head;
//        node* nn = nullptr;
//       //  Reverse the links between nodes to reverse the list
//        while (current != NULL) {
//            nn = current->next;
//            current->next = previous;
//            previous = current;
//            current = nn;
//        }
//     //    Update the head to point to the new first node
//        head = previous;
//    }
//    // Function to display the elements of the linked list
//    void display() {
//        node* temp = head;
//       //  Traverse the list and print each element
//        while (temp != nullptr) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//};
//int main() {
//    LinkedList list1;
//    int num=0;
//    while (num != -1) {
//        cout << "Enter nodes :";
//        cin >> num;
//        // Insert characters into the list 
//        if (num != -1) {
//            list1.insert(num);
//            int nodes = num;
//        }
//        else {
//            break;
//        }
//        
//    }
//   //  Display the original list
//    cout << "Original Singly List is: ";
//    list1.display();
//    list1.reverse();
//  //   Display the reversed copy
//    cout << "Reversed Singly List is: ";
//    list1.display();
//    return 0;
//}
