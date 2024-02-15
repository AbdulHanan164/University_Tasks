//#include <iostream>
//using namespace std;
//struct Node {
//    int data;
//    Node* next;
//    Node(int val) {
//        data = val;
//        next = nullptr;
//    }
//};
//// Function to insert a new node at the beginning of the linked list
//int insert(Node*& head, int val) {
//    Node* nn = new Node(val);
//    Node* temp = head;
//    if (temp == nullptr) {
//        nn->data = val;
//        nn->next = head;
//        head = nn;
//    }
//    else {
//        return insert(temp->next, val);
//    }
//}
//// Function to reverse a linked list
//Node* reverseLinkedList(Node* current, Node* previous = nullptr) {
//    if (current == nullptr) {
//        return previous;
//    }
//    Node* next = current->next;
//    current->next = previous;
//    return reverseLinkedList(next, current);
//}
//// Function to print the linked list
//void printLinkedList(Node* head) {
//    while (head != nullptr) {
//        cout << head->data<<" ";
//        head = head->next;
//    }
//}
//int main() {
//    Node* head = nullptr;
//    int num; int temp = 0;
//    // Sentinel loop to keep the program running
//    while (true) {
//        cout << "Enter number to insert in the list or press -1 to Exit :";
//        cin >> num;
//        temp = num;
//      if (temp == -1) {
//            break;
//        }        
//        insert(head, num);    
//    }
//    cout << "Original Linked List: ";
//    printLinkedList(head);
//    // Reverse the linked list
//    head = reverseLinkedList(head);
//    cout << "\nReversed Linked List: ";
//    printLinkedList(head);
//    return 0;
//}
