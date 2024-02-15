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
//    // Create a new node with the given value
//    node* nn = new node(val);
//    // If the linked list is empty set the new node as the head
//    if (head == NULL) {
//        head = nn;
//        return;
//    }
//    // Traverse the linked list to find the last node
//    node* temp = head;
//    while (temp->next != NULL) {
//        temp = temp->next;
//    }
//    // Append the new node to the end of the linked list
//    temp->next = nn;
//}
//// Function to display the elements of the linked list
//void display(node* head) {
//    // Traverse the linked list and print each element 
//    while (head != NULL) {
//        cout << head->data << " -> ";
//        head = head->next;
//    }
//    cout << "NULL" << endl;
//}
//// Function to remove duplicate elements from a sorted linked list
//void remove_Duplicates(node* head) {
//    if (head == NULL) {
//        return;
//    }
//    node* current = head;
//    int duplicate_count = 0;
//    while (current->next != NULL) {
//        // If the current nodes data is the same as the next node data remove the next node
//        if (current->data == current->next->data) {
//            node* duplicate = current->next;
//            current->next = current->next->next;
//            delete duplicate;
//            duplicate_count++;
//        }
//        else {
//            current = current->next;
//        }
//    }
//    // Display the number of duplicates removed
//    cout << "Number of duplicates removed: " << duplicate_count << endl;
//}
//int main() {
//    node* head = NULL;
//    // Insert elements in decreasing order (sorted)
//    int arr[] = { 10, 8, 8, 6, 4, 4, 2 };
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//        insert(head, arr[i]);
//    }
//    // Display the original linked list
//    cout << "Original Linked List: ";
//    display(head);
//    // Remove duplicates from the linked list
//    remove_Duplicates(head);
//    // Display the linked list after removing duplicates
//    cout << "Linked List after removing duplicates: ";
//    display(head);
//    return 0;
//}
