//#include <iostream>
//using namespace std;
//// Define a class for a linked list node
//class node {
//public:
//    int data;        // Data stored in the node
//    node* next;      // Pointer to the next node
//    // Constructor to initialize a node with given data
//    node(int val) {
//        data = val;
//        next = NULL;
//    }
//};
//// Function to insert a new node with a given value at the end of the linked list
//void insert(node*& head, int val) {
//    node* n = new node(val); // Create a new node with the given value
//    if (head == NULL) {
//        head = n;  // If the linked list is empty, set the new node as the head
//        return;
//    }
//    node* temp = head;       // Initialize a temporary pointer to traverse the list
//    while (temp->next != NULL) {
//        temp = temp->next;   // Traverse to the last node in the list
//    }
//    temp->next = n;          // Set the new node as the next node of the last node
//}
//// Function to display the elements of the linked list
//void display(node* head) {
//    while (head != NULL) {
//        cout << head->data << "->"; // Print the data of the current node
//        head = head->next;          // Move to the next node
//    }
//    cout << "NULL" << endl;         
//}
//// Function to merge two sorted linked lists into a new sorted linked list
//node* merge(node*& head1, node*& head2) {
//    node* ptr1 = head1;  // Pointer to traverse the first linked list
//    node* ptr2 = head2;  // Pointer to traverse the second linked list
//    node* temp = new node(-1); // Create a dummy node to simplify merging
//    node* ptr3 = temp;   // Pointer to build the merged list
//    while (ptr1 != NULL && ptr2 != NULL) {
//        if (ptr1->data < ptr2->data) {
//            ptr3->next = ptr1; // Append the smaller node from the first list
//            ptr1 = ptr1->next;
//        }
//        else {
//            ptr3->next = ptr2; // Append the smaller node from the second list
//            ptr2 = ptr2->next;
//        }
//        ptr3 = ptr3->next; // Move to the next node in the merged list
//    }
//    // Append any remaining nodes from both lists
//    while (ptr1 != NULL) {
//        ptr3->next = ptr1;
//        ptr1 = ptr1->next;
//        ptr3 = ptr3->next;
//    }
//    while (ptr2 != NULL) {
//        ptr3->next = ptr2;
//        ptr2 = ptr2->next;
//        ptr3 = ptr3->next;
//    }
//    return temp->next; // Return the merged linked list (excluding the dummy node)
//}
//int main() {
//    node* head1 = NULL; // Initialize the first linked list
//    node* head2 = NULL; // Initialize the second linked list
//    int arr1[4] = { 1, 4, 5, 7 }; // Elements for the first list
//    int arr2[3] = { 2, 3, 6 };   // Elements for the second list
//    // Insert elements from the arrays into the respective linked lists
//    for (int i = 0; i < 4; i++) {
//        insert(head1, arr1[i]);
//    }
//    for (int i = 0; i < 3; i++) {
//        insert(head2, arr2[i]);
//    }
//    // Display the original lists
//    cout << "List 1: ";
//    display(head1);
//    cout << "List 2: ";
//    display(head2);
//    // Merge the two sorted lists and display the merged list
//    node* mergedList = merge(head1, head2);
//    cout << "Merged List: ";
//    display(mergedList);
//    return 0;
//}