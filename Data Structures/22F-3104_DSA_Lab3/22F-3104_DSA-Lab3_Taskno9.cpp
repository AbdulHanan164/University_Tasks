#include <iostream>
using namespace std;
class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};
class LinkedList {
public:
    node* head;
    LinkedList() {
        head = NULL;
    }
    // Function to insert a new node at the end of the linked list
    void insert(int val) {
        node* nn = new node(val);
        if (head == NULL) {
            head = nn;
            return;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nn;
    }
    // Function to insert a node into the list while maintaining the decreasing order
    void SortedInsert(node* newNode) {
        if (head == NULL || head->data < newNode->data) {
            // If the list is empty or the new node should be inserted at the beginning
            newNode->next = head;
            head = newNode;
        }
        else {
            // Find the position to insert the new node
            node* current = head;
            while (current->next != NULL && current->next->data > newNode->data) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }
    // Function to display the elements of the linked list
    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
    int main() {
        LinkedList list1;
        // Insert elements into list1 sorted in decreasing order
        list1.insert(5);
        list1.insert(3);
        list1.insert(1);
        cout << "Original List 1: ";
        list1.display();
        // Create a new node and insert it into the sorted position
        node* nn = new node(4);
        list1.SortedInsert(nn);
        cout << "List 1 after SortedInsert: ";
        list1.display();
        return 0;
    }
