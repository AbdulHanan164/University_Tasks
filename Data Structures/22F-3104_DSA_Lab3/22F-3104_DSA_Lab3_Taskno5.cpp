//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//class node {
//public:
//    int data;
//    node* next;
//
//    node(int val) {
//        data = val;
//        next = NULL;
//    }
//};
// Function to insert a node with 'val' at the end of the linked list 'head'
//void insertAtTail(node*& head, int val) {
//    node* n = new node(val);
//    if (head == NULL) {
//        head = n;
//        return;
//    }
//    node* temp = head;
//    while (temp->next != NULL) {
//        temp = temp->next;
//    }
//    temp->next = n;
//}
// Function to display the elements in the linked list 'head'
//void display(node* head) {
//    while (head != NULL) {
//        cout << head->data << " -> ";
//        head = head->next;
//    }
//    cout << "NULL" << endl;
//}
//int main() {
//    node* head = NULL;
//    int RandArray[30];
//     Initialize the random number generator with the current time
//    srand((time(0)));
//     Generate 30 random numbers and add them to both an array and a linked list
//    for (int i = 0; i < 30; i++) {
//        int randomNum = rand() % 1001; // Generate random numbers between 0 and 1000
//        RandArray[i] = randomNum;
//        insertAtTail(head, randomNum);
//    }
//     Calculate the sum of the elements in the array
//    int sum = 0;
//    for (int i = 0; i < 30; i++) {
//        sum += RandArray[i];
//    }
//     Calculate the average of the elements in the array
//    int Average = 0;
//    Average = sum / 30;
//     Find the maximum and minimum values in the array
//    int Max = 0;
//    int Min = RandArray[0];
//    for (int i = 0; i < 30; i++) {
//        if (RandArray[i] > Max) {
//            Max = RandArray[i];
//        }
//
//        if (RandArray[i] < Min) {
//            Min = RandArray[i];
//        }
//    }
//     Display the linked list and the calculated statistics
//    cout << "Random number generated Linked List: ";
//    display(head);
//    cout << "\n\nSum of linked list is : " << sum;
//    cout << "\n\nAverage of linked list is : " << Average;
//    cout << "\n\nMaximum Element of linked list is : " << Max;
//    cout << "\n\nMinimum Element of linked list is : " << Min;
//    return 0;
//}
