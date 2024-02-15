//#include <iostream>
//using namespace std;
//class Queue {
//public:
//    int front; 
//    int rear;
//    int size;       
//    int* arr;       
//    Queue() {
//        cout << "Enter size of Array :";
//        cin >> size;
//        front = -1; 
//        rear = -1;
//        arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = 0; // Initialize all elements to 0
//        }
//    }
//    // Check if the queue is full
//    bool Isfull() {
//        if (rear == size - 1) {
//            cout << "Queue is Full :";
//            return true;
//        }
//        else {
//            cout << "Queue is not Full :";
//            return false;
//        }
//    }
//    // Check if the queue is empty
//    bool IsEmpty() {
//        if (rear == -1 && front == -1) {
//            cout << "Queue is Empty:";
//            return true;
//        }
//        else {
//            cout << "Queue is not Empty :";
//            return false;
//        }
//    }
//    // Add an element to the rear of the queue
//    void Enqueue(int val) {
//        if (Isfull()) {
//            cout << "Queue is full" << endl;
//            return;
//        }
//        else if (IsEmpty()) {
//            front = rear = 0;
//        }
//        else {
//            rear++;
//        }
//        arr[rear] = val; // Add the value to the rear of the queue
//    }
//    int Dequeue() {
//        int x = 0;
//        if (IsEmpty()) {
//            cout << "Queue is empty" << endl;
//            return x;
//        }
//        else if (rear == front) {
//            x = arr[front];
//            arr[front] = 0;
//            front = rear = -1; // Reset front and rear for an empty queue
//        }
//        else {
//            x = arr[front];
//            arr[front] = 0;
//            front++; 
//        }
//        return x; // Return the dequeued value
//    }
//    // Display the elements of the queue
//    void display() {
//        for (int i = 0; i < size; i++) {
//            cout << arr[i] << " ";
//        }
//    }
//    // Destructor to free dynamically allocated memory
//    ~Queue() {
//        cout << "\nDestructor called :" << endl;
//        delete[] arr;
//    }
//};
//int main() {
//    int choice = 0;
//    Queue obj;
//    // Menu driven loop for interacting with the queue
//    do {
//        cout << "\nEnter 1 to check Array is Empty :";
//        cout << "\nEnter 2 to check Array is Full :";
//        cout << "\nEnter 3 to insert in Endqueue :";
//        cout << "\nEnter 4 to delete from dequeue :";
//        cout << "\nEnter 5 to Display the Array :";
//        cout << "\n\nEnter choice or press -1 to exit:";
//        cin >> choice;
//        if (choice == 1) {
//            obj.IsEmpty();
//        }
//        else if (choice == 2) {
//            obj.Isfull();
//        }
//        else if (choice == 3) {
//            int  num;
//            cout << "\n Enter number :";
//            cin >> num;
//            obj.Enqueue(num);
//        }
//        else if (choice == 4) {
//            obj.Dequeue();
//        }
//        else if (choice == 5) {
//            obj.display();
//        }
//    } while (choice != -1);
//    return 0;
//}
