//#include <iostream>
//using namespace std;
//class Queue {
//public:
//    int data;
//    Queue* next;
//    Queue(int val) {
//        data = val;
//        next = nullptr;
//    }
//};
//
//class QueueList {
//private:
//    Queue* front;
//    Queue* rear;
//public:
//    QueueList() {
//        front = rear = nullptr;
//    }
//    // Check if the Queue is empty
//    bool isEmpty() {
//        return front == nullptr;
//    }
//    // Enqueue add an element to the rear of the Queue
//    void enqueue(int val) {
//        Queue* newNode = new Queue(val);
//        if (isEmpty()) {
//            // If the Queue is empty set both front and rear to the new node
//            front = rear = newNode;
//        }
//        else {
//            // Otherwise, append the new node to the rear and update rear pointer
//            rear->next = newNode;
//            rear = newNode;
//        }
//    }
//    // Dequeue remove an element from the front of the Queue
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return;
//        }
//        // Remove the front element update front pointer and deallocate memory
//        Queue* temp = front;
//        front = front->next;
//        delete temp;
//    }
//    // Display the elements in the Queue
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return;
//        }
//        Queue* current = front;
//        while (current != nullptr) {
//            cout << current->data << " ";
//            current = current->next;
//        }
//        cout << endl;
//    }
//    // Destructor to free memory by dequeuing all elements
//    ~QueueList() {
//        while (!isEmpty()) {
//            dequeue();
//        }
//    }
//};
//int main() {
//    int choice = 0;
//    QueueList queue;
//// Menu driven loop for the queue
//        QueueList obj;       
//        do {
//            cout << "\nEnter 1 to check Array is Empty :";
//            cout << "\nEnter 2 to insert in Endqueue :";
//            cout << "\nEnter 3 to delete from dequeue :";
//            cout << "\nEnter 4 to Display the Array :";
//            cout << "\n\nEnter choice or press -1 to exit:";
//            cin >> choice;
//            if (choice == 1) {
//                obj.isEmpty();
//                cout << "Queue is Empty :" << endl;
//            }
//            else if (choice == 2) {
//                int  num;
//                cout << "\n Enter number :";
//                cin >> num;
//                obj.enqueue(num);
//            }
//            else if (choice == 3) {
//                obj.dequeue();
//            }
//            else if (choice == 4) {
//                obj.display();
//            }
//        } while (choice != -1);
//    return 0;
//}
