#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = this; // Initialize next and prev to itself for circularity.
        prev = this;
    }
};
class CircularDoublyLinkedList {
public:
    Node* head;
    CircularDoublyLinkedList() {
        head = nullptr;
    }
    // Function to insert a new element at the end of the circular doubly linked list.
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* tail = head->prev; // Get the current tail
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head; // Circular connection
            head->prev = newNode; // Update the head's previous pointer
        }
    }
    // Function to delete a node with a given value from the circular doubly linked list.
    void remove(int value) {
        if (head == nullptr)
            return;

        Node* current = head;
        do {
            if (current->data == value) {
                Node* prevNode = current->prev;
                Node* nextNode = current->next;
                prevNode->next = nextNode;
                nextNode->prev = prevNode;
                if (current == head) {
                    head = nextNode; // Update the head if deleting the head node
                }
                delete current;
                return; // Exit after deleting the first occurrence
            }
            current = current->next;
        } while (current != head);
    }

    // Function to display the circular doubly linked list.
    void display() {
        if (head == nullptr)
            return;

        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);

        cout << endl;
    }
};

int main() {
    CircularDoublyLinkedList myList;
             int num=0;
         while (num != -1) {
             cout << "Enter nodes :";
             cin >> num;
             if (num != -1) {
                 myList.insert(num);
                 int nodes = num;
             }
             else {
                 break;
             }
         }
    cout << "Original List: ";
    myList.display();
    int remove;
    cout << "Enter elment to remove :";
    cin >> remove;
    myList.remove(remove);
    cout << "Enter elment to remove :";
    cin >> remove;
    myList.remove(remove);
    cout << "List after removal: ";
    myList.display();
    return 0;
}
