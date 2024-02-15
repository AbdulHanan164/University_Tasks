//#include <iostream>
//#include <Windows.h>
//using namespace std;
//template<typename T>
//class Deque {
//private:
//    T* dequeArr;    
//    int maxSize;    
//    int rear, front;  
//
//public:
//    Deque(int size);
//    // Method to check if the deque is empty
//    bool isEmpty();
//    // Method to check if the deque is full
//    bool isFull();
//    // Method to insert an element at the front of the deque
//    void insertFront(T value);
//    // Method to insert an element at the back of the deque
//    void insertBack(T value);
//
//    // Method to remove an element from the front of the deque
//    T removeFront();
//    // Method to remove an element from the back of the deque
//    T removeBack();
//    // Method to display the contents of the deque
//    void display();
//    //  free dynamically allocated memory.
//    ~Deque();
//};
//template<typename T>
//Deque<T>::Deque(int size) {
//    maxSize = size;
//    dequeArr = new T[maxSize];  
//    front = rear = -1;         
//}
//// Method to check if the deque is empty
//template<typename T>
//bool Deque<T>::isEmpty() {
//    if (front == -1) {
//        cout << "Status: Queue is Empty." << endl;
//        return true;
//    }
//    cout << "Status: Queue is not Empty." << endl;
//    return false;
//}
//// Method to check if the deque is full
//template<typename T>
//bool Deque<T>::isFull() {
//    if ((front == 0 && rear == maxSize - 1) || front == rear + 1) {
//        cout << "Queue is Full." << endl;
//        return true;
//    }
//    cout << "Queue is not Full." << endl;
//    return false;
//}
//
//// Method to insert an element at the front of the deque
//template<typename T>
//void Deque<T>::insertFront(T value) {
//    if (isFull()) {
//        cout << "Queue is already full." << endl;
//        return;
//    }
//    if (front == -1) {
//        front = 0;
//        rear = 0;
//    }
//    else if (front == 0) {
//        front = maxSize - 1;
//    }
//    else {
//        front = front - 1;
//    }
//    dequeArr[front] = value;
//    cout << value << " has been enqueued in from the front." << endl;
//}
//// Method to insert an element at the back of the deque
//template<typename T>
//void Deque<T>::insertBack(T value) {
//    if (isFull()) {
//        cout << "Queue is already full." << endl;
//        return;
//    }
//    if (front == -1) {
//        front = 0;
//        rear = 0;
//    }
//    else if (rear == maxSize - 1) {
//        rear = 0;
//    }
//    else {
//        rear = rear + 1;
//    }
//    dequeArr[rear] = value;
//    cout << value << " has been enqueued in from the back." << endl;
//}
//// Method to remove an element from the front of the deque
//template<typename T>
//T Deque<T>::removeFront() {
//    if (isEmpty()) {
//        cout << "Queue is already empty." << endl;
//        return T();
//    }
//    T value = dequeArr[front];
//    if (front == rear) {
//        front = -1;
//        rear = -1;
//    }
//    else if (front == maxSize - 1) {
//        front = 0;
//    }
//    else {
//        front = front + 1;
//    }
//    cout << value << " has been dequeued from the front." << endl;
//    return value;
//}
//// Method to remove an element from the back of the deque.
//template<typename T>
//T Deque<T>::removeBack() {
//    if (isEmpty()) {
//        cout << "Queue is already empty." << endl;
//        return T();
//    }
//    T value = dequeArr[rear];
//    if (front == rear) {
//        front = -1;
//        rear = -1;
//    }
//    else if (rear == 0) {
//        rear = maxSize - 1;
//    }
//    else {
//        rear = rear - 1;
//    }
//    cout << value << " has been dequeued from the back." << endl;
//    return value;
//}
//
//// Method to display the contents of the deque
//template<typename T>
//void Deque<T>::display() {
//    cout << "\nYour queue: ";
//    if (front == -1) {
//        cout << "Queue is empty." << endl;
//        return;
//    }
//    int i = front;
//    do {
//        cout << dequeArr[i] << " ";
//        i = (i + 1) % maxSize;
//    } while (i != (rear + 1) % maxSize);
//    cout << endl;
//}
//
//// Destructor to free dynamically allocated memory
//template<typename T>
//Deque<T>::~Deque() {
//    delete[] dequeArr;
//}
//int main() {
//    int size, choice;
//    int value;
//    cout << "Enter the size of the queue: ";
//    cin >> size;
//    Deque<int> obj(size);
//
//    while (true) {
//        cout << "1. Insert element from front\n";
//        cout << "2. Insert element from back\n";
//        cout << "3. Remove element from front\n";
//        cout << "4. Remove element from back\n";
//        cout << "5. Display\n";
//        cout << "6. Check if queue is empty\n";
//        cout << "7. Check if queue is full\n";
//        cout << "0. Exit\n";
//        cout << "Enter the choice: ";
//        cin >> choice;
//        switch (choice) {
//        case 1:
//            cout << "Enter the data to enqueue: ";
//            cin >> value;
//            obj.insertFront(value);
//            break;
//        case 2:
//            cout << "Enter the data to enqueue: ";
//            cin >> value;
//            obj.insertBack(value);
//            break;
//        case 3:
//            obj.removeFront();
//            break;
//        case 4:
//            obj.removeBack();
//            break;
//        case 5:
//            obj.display();
//            break;
//        case 6:
//            obj.isEmpty();
//            break;
//        case 7:
//            obj.isFull();
//            break;
//        case 0:
//            return 0;
//        default:
//            cout << "Invalid choice" << endl;
//        }
//        Sleep(2000);
//        system("cls");
//    }
//}
