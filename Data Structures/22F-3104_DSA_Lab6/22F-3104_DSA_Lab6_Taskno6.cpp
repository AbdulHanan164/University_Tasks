#include <iostream>
using namespace std;

// Define a Queue class
class Queue {
public:
    int rear;
    int front;
    int size;
    int* items;

    // Constructor to initialize the queue
    Queue(int Size) {
        front = 0;
        rear = -1;
        size = Size;
        items = new int[size];
    }

    // Check if the queue is empty
    bool isEmpty() {
        if (front > rear) {
            return true;
        }
        else {
            return false;
        }
    }

    // Check if the queue is full
    bool isFull() {
        if (rear == size - 1) {
            return true;
        }
        else {
            return false;
        }
    }

    // Enqueue an element into the queue
    void enqueue(int data) {
        if (front > rear) {
            cout << "Queue is full.\n";
            return;
        }
        rear++;
        items[rear] = data;
    }

    // Dequeue an element from the queue
    int dequeue() {
        if (front > rear) {
            return 0;
        }
        front++;
        return items[front];
    }

    // Destructor to free memory
    ~Queue() { delete[] items; }
};

// Function to maximize profit by seating people
int maximizeProfit(int* seats, int num_people, int rows) {
    Queue obj(num_people);

    // Enqueue people into the queue
    for (int i = 0; i < num_people; i++) {
        obj.enqueue(i);
    }

    int profit = 0; // Initialize profit to zero

    // Continue seating people until the queue is empty
    while (obj.isEmpty() == true) {
        int current = obj.dequeue() + 1;

        // Find a row with the maximum number of seats
        int max_seats_in_a_row = 0;
        int max_row = -1;
        for (int i = 0; i < rows; i++) {
            if (seats[i] > max_seats_in_a_row) {
                max_seats_in_a_row = seats[i];
                max_row = i;
            }
        }

        // Check for no more empty seats
        if (max_row == -1) {
            break;
        }

        // Update profit and the number of empty seats in the row
        profit = profit + max_seats_in_a_row;
        seats[max_row]--;

        // Print current statistics
        cout << "Total profit: " << profit << endl;
        cout << "Vacant seats: ";
        for (int i = 0; i < rows; i++) {
            cout << seats[i] << " ";
        }
        cout << endl;
        cout << "People in queue: " << num_people - (current) << endl << endl;
    }

    return profit;
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    // Create an array to represent the number of seats in each row
    int* seats = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the element of the " << i + 1 << " queue: ";
        cin >> seats[i];
    }

    int rows, num_people;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of people: ";
    cin >> num_people;

    // Call the maximizeProfit function to calculate and print the maximum profit
    cout << "Maximum profit: " << maximizeProfit(seats, num_people, rows);

    // Free dynamically allocated memory
    delete[] seats;

    return 0;
}
