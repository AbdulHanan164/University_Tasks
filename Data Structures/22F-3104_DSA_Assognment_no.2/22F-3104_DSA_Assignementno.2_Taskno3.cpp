//#include <iostream>
//using namespace std;
//
//class Stack {
//public:
//    int* arr;     
//    int top;          
//    int capacity;     
//    Stack(int size) {
//        capacity = size;
//        arr = new int[capacity];  
//        top = -1;                
//    }
//    bool isEmpty() {
//        return top == -1;  // The stack is empty if the top index is -1
//    }
//    bool isFull() {
//        return top == capacity - 1;  // The stack is full if the top index equals capacity - 1
//    }
//    void push(int value) {
//        if (isFull()) {
//            cout << "Stack is full" << endl;
//            return;  
//        }
//        arr[++top] = value;  // Increment the top index and add the value to the stack
//    }
//    int pop() {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//            return -1; 
//        }
//        return arr[top--];  // Return and decrement the top index to remove the top element
//    }
//    int peek() {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//            return -1;  
//        }
//        return arr[top];  // Return the top element 
//    }
//    ~Stack() {
//        delete[] arr;  // Deallocate the memory 
//    }
//};
//class QueueUsingStacks {
//private:
//    Stack stack1;  // First stack for enqueue operation
//    Stack stack2;  // Second stack for dequeue operation
//public:
//    QueueUsingStacks(int size) : stack1(size), stack2(size) {}  // Constructor for the queue
//    bool isEmpty() {
//        return stack1.isEmpty() && stack2.isEmpty();  // The queue is empty if both stacks are empty
//    }
//    bool isFull() {
//        return stack1.isFull() || stack2.isFull();  // The queue is full if either stack is full
//    }
//    void enqueue(int value) {
//        if (isFull()) {
//            cout << "Queue is full " << endl;
//            return; 
//        }
//        // transfer elements from stack1 to stack2 to maintain the order for enqueue
//        while (!stack1.isEmpty()) {
//            stack2.push(stack1.pop());
//        }
//        stack1.push(value); 
//        // Transfer elements back to stack1 to keep the correct order for dequeue
//        while (!stack2.isEmpty()) {
//            stack1.push(stack2.pop());
//        }
//    }
//    int dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty" << endl;
//            return -1;
//        }
//        return stack1.pop();  // Dequeue by popping the top element from stack1
//    }
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is empty" << endl;
//        }
//        else {
//            cout << "Queue Contents: ";
//            for (int i = 0; i <= stack1.top; i++) {
//                cout << stack1.arr[i] << " "; 
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    int size;
//    cout << "Enter size of the Queue: ";
//    cin >> size;
//
//    QueueUsingStacks queue(size);
//    int choice, value;
//
//    while (true) {
//        cout << "Queue Menu:" << endl;
//        cout << "1. Enqueue" << endl;
//        cout << "2. Dequeue" << endl;
//        cout << "3. Display Queue" << endl;
//        cout << "4. Check if Empty" << endl;
//        cout << "5. Check if Full" << endl;
//        cout << "6. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter a value to enqueue: ";
//            cin >> value;
//            queue.enqueue(value);  
//            break;
//        case 2:
//            value = queue.dequeue();  
//            if (value != -1) {
//                cout << "Dequeued value: " << value << endl;
//            }
//            break;
//        case 3:
//            queue.display();  
//            break;
//        case 4:
//            if (queue.isEmpty()) {
//                cout << "Queue is empty." << endl;
//            }
//            else {
//                cout << "Queue is not empty." << endl;
//            }
//            break;
//        case 5:
//            if (queue.isFull()) {
//                cout << "Queue is full." << endl;
//            }
//            else {
//                cout << "Queue is not full." << endl;
//            }
//            break;
//        case 6:
//            cout << "Exit" << endl;
//            return 0;  
//        default:
//            cout << "Invalid choice" << endl; 
//        }
//    }
//    return 0;
//}
