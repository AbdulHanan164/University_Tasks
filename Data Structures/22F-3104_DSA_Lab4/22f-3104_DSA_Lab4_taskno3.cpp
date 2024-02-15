//#include <iostream>
//using namespace std;
// //In this code i write the circular list in which data of the nodes points to even nodes and intialize it to even head and odd data to oddhead and if it is even then it will sent at the tail and if odd then it will insert at head
//class node {
//public:
//    int data;
//    node* next;
//
//    node(int val) {
//        data = val;
//        next = NULL;
//    }
//};
//// Function to insert a node at the end of a circular linked list
//void insert_end(node*& head, int val) {
//    node* n = new node(val);
//    if (head == NULL) {
//        n->next = n;
//        head = n;
//    }
//    else {
//        node* temp = head;
//        while (temp->next != head) {
//            temp = temp->next;
//        }
//        temp->next = n;
//        n->next = head;
//    }
//}
//// Function to rearrange the circular linked list
//void rearrangeCircularList(node*& head) {
//    if (head == NULL || head->next == head) {
//        return;
//    }
//    // Initialize pointers for odd and even nodes
//    node* oddHead = head;
//    node* evenHead = head->next;
//    node* oddCurrent = oddHead;
//    node* evenCurrent = evenHead;
//    // Rearrange the nodes separating odd index and even index nodes
//    while (evenCurrent->next != head && evenCurrent->next->next != head) {
//        oddCurrent->next = evenCurrent->next;
//        oddCurrent = oddCurrent->next;
//        evenCurrent->next = oddCurrent->next;
//        evenCurrent = evenCurrent->next;
//    }
//    // Handle the case when the number of nodes is odd
//    if (evenCurrent->next == head) {
//        oddCurrent->next = evenCurrent->next;
//        oddCurrent = oddCurrent->next;
//    }
//    // Make the odd indexed list circular
//    oddCurrent->next = evenHead;
//    // Make the even indexed list circular
//    evenCurrent->next = head;
//    // Update the head to the new head
//    head = oddHead;
//}
//// Function to display the circular linked list
//void display(node* head) {
//    if (head == NULL) {
//        return;
//    }
//    node* temp = head;
//    do {
//        cout << temp->data << " ";
//        temp = temp->next;
//    } while (temp != head);
//    cout << endl;
//}
//int main() {
//    node* head = NULL;
//        int num=0;
//    while (num != -1) {
//        cout << "Enter nodes :";
//        cin >> num;
//            insert_end(head,num);
//            int nodes = num;
//    
//    }
//    cout << "Original Circular Linked List: ";
//    display(head);
//    rearrangeCircularList(head);
//    cout << "Rearranged Circular Linked List: ";
//    display(head);
//    return 0;
//}
