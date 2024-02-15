//#include <iostream>
//using namespace std;
//class node {
//public:
//    int data;
//    node* next;
//    node(int val) {
//        data = val;
//        next = NULL;
//    }
//};
//// Function to insert a new node at the end of the linked list
//void insert(node*& head, int val) {
//    node* nn = new node(val); // Create a new node with the given value
//    if (head == NULL) {
//        head = nn; // If the list is empty set the new node as the head
//        return;
//    }
//    node* temp = head;
//    while (temp->next != NULL) {
//        temp = temp->next; // Traverse to the end of the list
//    }
//    temp->next = nn; // Connect the last node to the new node
//}
//// Function to display the elements of the linked list
//void display(node* head) {
//    while (head != NULL) {
//        cout << head->data << " -> "; // Print the data of the current node
//        head = head->next; // Move to the next node
//    }
//    cout << "NULL" << endl; // Print NULL to indicate the end of the list
//}
//// Function to insert a new node in the middle of the linked list
//void insertInMiddle(node*& head, int val) {
//    int count = 0;
//    node* temphead = head;
//    while (temphead != NULL) {
//        temphead = temphead->next;
//        count++;
//    }
//    int mid = count / 2; // Calculate the middle position
//
//    if (mid == 0) {
//        node* nn = new node(val);
//        nn->next = head;
//        head = nn; // If there is only one node insert before it
//    }
//    else {
//        int c = 0;
//        temphead = head;
//        while (temphead != NULL) {
//            if (c == mid - 1) {
//                node* nn = new node(val); // Create a new node with the given value
//                nn->next = temphead->next; // Connect the new node to the next node
//                temphead->next = nn; // Connect the current node to the new node
//                break;
//            }
//            temphead = temphead->next; // Traverse the list
//            c++;
//        }
//    }
//}
//int main() {
//    node* head = NULL; // Initialize an empty linked list
//    int nn;
//    cout << "Enter the number of nodes for the linked list: ";
//    cin >> nn;
//
//    if (nn % 2 == 0) {
//        cout << "The number of nodes should be odd." << endl; // Check for an odd number of nodes
//        return 1;
//    }
//    for (int i = 1; i <= nn; i++) {
//        int val;
//        cout << "Enter the value for node " << i << ": ";
//        cin >> val;
//        insert(head, val); // Insert each node at the end of the linked list
//    }
//    cout << "Original Linked List: ";
//    display(head); // Display the original linked list
//    // Check if the number of nodes is odd and insert a new node in the middle
//    int newVal1;
//    cout << "Enter the value to insert in the middle: ";
//    cin >> newVal1;
//    if ((nn % 2) != 0) {
//        insertInMiddle(head, newVal1); // Insert a new node in the middle
//        cout << "Updated Linked List (after inserting a new node due to odd nodes): ";
//        display(head); // Display the updated linked list
//    }
//    return 0;
//}
