#include <iostream>
using namespace std;
struct Patient
{
    string name;
    int condition; // more higher value more severe condition.
    int waitingRoom; // new field to store the waiting room number

    Patient() { }
    Patient(string name, int condition, int waitingRoom)
    {
        this->name = name;
        this->condition = condition;
        this->waitingRoom = waitingRoom;
    }
};
class MaxHeap
{
private:
    Patient* heapArray;
    int capacity;
    int size;

public:
    MaxHeap() { }
    MaxHeap(int capacity)
    {
        this->capacity = capacity;
        this->heapArray = new Patient[capacity];
        this->size = 0;
    }
    void swap(Patient& a, Patient& b)
    {
        Patient temp = a;
        a = b;
        b = temp;
    }
    void heapify(int index)
    {
        int largest = index;
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        if (leftChild < size && heapArray[leftChild].condition > heapArray[largest].condition)
        {
            largest = leftChild;
        }
        if (rightChild < size && heapArray[rightChild].condition > heapArray[largest].condition)
        {
            largest = rightChild;
        }
        if (largest != index)
        {
            swap(heapArray[index], heapArray[largest]);
            heapify(largest);
        }
    }
    void insert(Patient patient, int waitingRoom)
    {
        if (size >= capacity)
        {
            cout << "Heap is full. Cannot add more patients." << endl;
            return;
        }
        int currentIndex = size;
        heapArray[size++] = Patient(patient.name, patient.condition, waitingRoom);

        while (currentIndex != 0 && heapArray[(currentIndex - 1) / 2].condition < heapArray[currentIndex].condition)
        {
            swap(heapArray[currentIndex], heapArray[(currentIndex - 1) / 2]);
            currentIndex = (currentIndex - 1) / 2;
        }
    }
    Patient extractMax()
    {
        if (size <= 0)
        {
            cout << "No patients in the waiting system." << endl;
            return Patient("", -1, -1);
        }
        Patient maxPatient = heapArray[0];
        heapArray[0] = heapArray[--size];
        heapify(0);
        return maxPatient;
    }
    int getSize()
    {
        return size;
    }
    void display()
    {
        cout << "Current State of the Waiting System:" << endl;
        cout << "----------------------------------" << endl;
        for (int i = 0; i < size; ++i)
        {
            cout << "Patient: " << heapArray[i].name << ", Condition: " << heapArray[i].condition
                << ", Waiting Room: " << heapArray[i].waitingRoom << endl;
        }
        cout << "----------------------------------" << endl;
    }
};
int main()
{
    int capacity, numWaitingRooms;
    cout << "Enter the capacity of the beds: ";
    cin >> capacity;
    cout << "Enter the number of waiting rooms: ";
    cin >> numWaitingRooms;
    MaxHeap maxHeap(capacity); // Assume hospital can handle 'capacity' patients
    int choice;
    while (true)
    {
        cout << "Hospital Patient Waiting System Menu:" << endl;
        cout << "1. Add Patient" << endl;
        cout << "2. Allot Bed to Patient" << endl;
        cout << "3. Number of Patients in Waiting System" << endl;
        cout << "4. Display Waiting System" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            string name;
            int condition, waitingRoom;
            cout << "Enter patient name: ";
            cin >> name;
            cout << "Enter patient condition: ";
            cin >> condition;
            cout << "Enter patient waiting room: ";
            cin >> waitingRoom;
            maxHeap.insert(Patient(name, condition, waitingRoom), waitingRoom);
            cout << "Patient added to the waiting system." << endl;
        }
        else if (choice == 2)
        {
            Patient patient = maxHeap.extractMax();
            if (patient.condition != -1)
            {
                cout << "Bed allotted to patient: " << patient.name << " with condition: " << patient.condition << " in waiting room: " << patient.waitingRoom << endl;
            }
        }
        else if (choice == 3)
        {
            int numPatients = maxHeap.getSize();
            cout << "Number of patients in the waiting system: " << numPatients << endl;
        }
        else if (choice == 4)
        {
            maxHeap.display();
        }
        else if (choice == 5)
        {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    system("pause>0");
    return 0;
}
