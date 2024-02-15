//#include <iostream>
//using namespace std;
//class Queue {
//public:
//	int front;
//	int rear;
//	int size;
//	int* arr = new int[size];  // Dynamic memory allocation for the queue array
//	Queue() {
//		cout << "Enter size of Array :";
//		cin >> size;
//		front = -1;
//		rear = -1;
//		arr = new int[size];
//		for (int i = 0; i < size; i++) {
//			arr[i] = 0;  // Initialize all elements of the queue array to 0
//		}
//	}
//	bool Isfull() {
//		if ((rear + 1) % size == front) {  // Check if the queue is full 
//			cout << "Queue is Full :";
//			return true;
//		}
//		else {
//			cout << "Queue is not Full :";
//			return false;
//		}
//	}
//	bool IsEmpty() {
//		if (rear == -1 && front == -1) {  // Check if the queue is empty
//			cout << "Queue is Empty:";
//			return true;
//		}
//		else {
//			cout << "Queue is not Empty :";
//			return false;
//		}
//	}
//	void Enqueue(int val) {
//		if (Isfull()) {
//			cout << "Queue is full" << endl;
//			return;
//		}
//		else if (IsEmpty()) {
//			front = rear = 0;  // Set front and rear to 0 when inserting the first element
//		}
//		else {
//			rear = (rear + 1) % size;  // Increment rear circularly
//		}
//		arr[rear] = val;  // Insert the value at the rear position
//	}
//	int Dequeue() {
//		int x = 0;
//		if (IsEmpty()) {
//			cout << "Queue is empty" << endl;
//			return x;
//		}
//		else if (rear == front) {  // When there is only one element in the queue
//			x = arr[front];
//			arr[front] = 0;
//			front = rear = -1;  // Reset front and rear
//		}
//		else {
//			x = arr[front];
//			arr[front] = 0;
//			front = (front + 1) % size;  // Increment front circularly
//		}
//		return x;
//	}
//	void display() {
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << " ";  // Display the elements of the queue
//		}
//	}
//	~Queue() {
//		cout << "\nDestructor called :" << endl;
//		delete[] arr;  // Deallocate the dynamically allocated memory
//	}
//};
//int main() {
//	int choice = 0;
//	Queue obj;
//	do {
//		cout << "\nEnter 1 to check if the Array is Empty :";
//		cout << "\nEnter 2 to check if the Array is Full :";
//		cout << "\nEnter 3 to insert into the Queue :";
//		cout << "\nEnter 4 to delete from the Queue :";
//		cout << "\nEnter 5 to Display the Queue :";
//		cout << "\n\nEnter choice or press -1 to exit:";
//		cin >> choice;
//		if (choice == 1) {
//			obj.IsEmpty();  
//		}
//		else if (choice == 2) {
//			obj.Isfull();  
//		}
//		else if (choice == 3) {
//			int  num;
//			cout << "\n Enter number :";
//			cin >> num;
//			obj.Enqueue(num);  
//		}
//		else if (choice == 4) {
//			obj.Dequeue(); 
//		}
//		else if (choice == 5) {
//			obj.display();  
//		}
//	} while (choice != -1);
//	return 0;
//}
