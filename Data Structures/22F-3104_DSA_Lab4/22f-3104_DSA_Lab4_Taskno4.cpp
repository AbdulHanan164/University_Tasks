//#include <iostream>
//using namespace std;
// //in this code i write the circular list i which i make a duplicate function which compare the node to the next node if it find any duplicate it will remove it and count the iteam reamove 
//class node {
//public:
//    int data;   
//    node* next;     
//    node(int val) {
//        data = val;
//        next = NULL;
//    }
//};
//void insert_head(node*& head, int val) {//insert nodes at the head
//    node* n = new node(val); 
//    if (head == NULL) {
//        n->next = n;  
//        head = n;     
//        return;
//    }
//    node* temp = head;
//    // Traverse to the last node in the list
//    while (temp->next != head) {
//        temp = temp->next;
//    }
//    temp->next = n;  // Connect the last node to the new node
//    n->next = head;  // Make the new node point to the head
//    head = n;        // Update the head to the new node
//}
//
//// Function to insert a new node at the end of the list
//void insert_end(node*& head, int val) {
//    node* n = new node(val);  // If the list is empty insert head
//    if (head == NULL) {
//        insert_head(head, val); 
//        return;
//    }
//    node* temp = head;
//    // Traverse to the last node in the list
//    while (temp->next != head) {
//        temp = temp->next;
//    }
//    temp->next = n;  // Connect the last node to the new node
//    n->next = head;  // Make the new node point to the head
//}
//
//// Function to remove duplicate elements list
//node* remove_Duplicates(node* head) {
//    if (head == NULL) {
//        return head;  // If the list is empty return it as it is
//    }
//    node* current = head;
//    int duplicate_count = 0;
//    while (current->next != head) {
//        // If the current node data is the same as the next node data remove the next node
//        if (current->data == current->next->data) {
//            node* duplicate = current->next;
//            current->next = current->next->next;
//            delete duplicate;  // Delete the duplicate node
//            duplicate_count++;
//        }
//        else {
//            current = current->next;  // Move to the next node
//        }
//    }
//    // Display the number of duplicates removed
//    cout << "Number of duplicates removed: " << duplicate_count << endl;
//    return head;
//}
//
//// Function to display the linked list
//void display(node* head) {
//    if (head == NULL) {
//        return;  // If the list is empty, nothing to display
//    }
//    node* temp = head;
//    do {
//        cout << temp->data << "->";  
//        temp = temp->next;           
//    } while (temp != head);           
//    cout << endl;
//}
//
//int main() {
//    node* head = NULL;
//         int num=0;
//     while (num != -1) {
//         cout << "Enter nodes :";
//         cin >> num;
//         if (num != -1) {
//             insert_end(head, num);
//             int nodes = num;
//         }
//         else {
//             break;
//         }
//     }
//    cout << "Original list:" << endl;
//    display(head);
//    head = remove_Duplicates(head);
//    cout << "List after removing duplicates:" << endl;
//    display(head);
//
//    return 0;
//}
