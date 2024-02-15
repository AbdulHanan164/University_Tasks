//#include <iostream>
//using namespace std;
//template <class T>
//class ListADT {
//public:
//    T arr[10];     // The array to store elements
//    int count;     // Current number of elements in the array
//    ListADT() {
//        count = 0;  // Initialize the count to 0 when an object is created
//    }
//    // Rearrange the elements of the array so that even elements come before odd elements
//    void Rearrange() {
//        T arr2[10];         // Temporary array to store rearranged elements
//        int evenCount = 0;  // Counter for even elements
//        int oddCount = count; // Counter for odd elements
//        // Iterate through the array and move even elements to the front
//        for (int i = 0; i < count; i++) {
//            if (arr[i] % 2 == 0) {
//                arr2[evenCount++] = arr[i];
//            }
//        }
//        // Iterate through the array again and move odd elements after even elements
//        for (int i = 0; i < count; i++) {
//            if (arr[i] % 2 == 1) {
//                arr2[evenCount++] = arr[i];
//            }
//        }
//        // Copy the rearranged elements back to the original array
//        for (int i = 0; i < count; i++) {
//            arr[i] = arr2[i];
//        }
//    }
//    // Insert an element at a specified position in the array
//    void insert() {
//        T num;          // Element to be inserted
//        int position;   // Position where the element should be inserted
//        cout << "\nEnter element to insert: ";
//        cin >> num;
//        cout << "\nEnter position to insert: ";
//        cin >> position;
//        if (position >= 0 && position <= count) {
//            // Shift elements to make space for the new element
//            for (int i = count; i > position; i--) {
//                arr[i] = arr[i - 1];
//            }
//            arr[position] = num;
//            count++;
//            cout << "\nArray after insertion: ";
//            Display();
//        }
//        else {
//            cout << "\nInvalid position!";
//        }
//    }
//    // Remove all elements from the array
//    void remove() {
//        cout << "After removing all elements :";
//        count = 0;  // Set count to 0 to indicate an empty array
//        Display();
//    }
//    // Display the elements of the array
//    void Display() {
//        for (int i = 0; i < count; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    // Remove an element at a specified position from the array
//    void removeAt() {
//        int position;   // Position from which an element should be removed
//        cout << "\nEnter position to remove: ";
//        cin >> position;
//        if (position >= 0 && position < count) {
//            // Shift elements to fill the gap left by the removed element
//            for (int i = position; i < count - 1; i++) {
//                arr[i] = arr[i + 1];
//            }
//            count--;
//            cout << "\nArray after removing at position: ";
//            Display();
//        }
//        else {
//            cout << "\nInvalid position!";
//        }
//    }
//    // Replace an element at a specified position with a new element
//    void Replace() {
//        T num;          // New element to replace the existing one
//        int position;   // Position of the element to be replaced
//        cout << "\nEnter element to replace: ";
//        cin >> num;
//        cout << "\nEnter position of element to replace: ";
//        cin >> position;
//        if (position >= 0 && position < count) {
//            arr[position] = num;
//            cout << "\nArray after replacing at position: ";
//            Display();
//        }
//        else {
//            cout << "\nInvalid position!";
//        }
//    }
//    // Display the size of the array
//    void size() {
//        cout << "The size of the array is: " << count;
//    }
//    // Check if the array is empty and display a message
//    void IsEmpty() {
//        cout << "Array is empty.\n";
//    }
//    // Check if the array is filled and display a message
//    void IsFill() {
//        cout << "Array is :";
//        for (int i = 0; i < count; i++) {
//            if (arr[i] != NULL) {
//                cout << arr[i] << " ";
//            }
//        }
//        cout << " Filled.\n";
//    }
//    // Add an element to the array if it is not already full
//    void get() {
//        T num;
//        if (count < 10) {
//            cout << "\nEnter element to add: ";
//            cin >> num;
//            arr[count++] = num;
//            cout << "\nArray after adding: ";
//            Display();
//        }
//        else {
//            cout << "\nArray is already filled!";
//        }
//    }
//};
//
//int main() {
//    ListADT<int> obj;
//    int choice = 0;
//    // Initialize the array with 5 elements
//    for (int i = 0; i < 5; i++) {
//        cout << "Enter Element of the List [" << i + 1 << "] = ";
//        cin >> obj.arr[i];
//        obj.count++;
//    }
//    // Main menu to select the choice
//    while (choice != -1) {
//        cout << "\nPress 1 for Rearrange the List :";
//        cout << "\nPress 2 for Insert Element in the List :";
//        cout << "\nPress 3 for Removing all Element in the List :";
//        cout << "\nPress 4 to RemoveAt specific index in the List :";
//        cout << "\nPress 5 to Replace at Specific index in the Array :";
//        cout << "\nPress 6 to check the size of the List :";
//        cout << "\nPress 7 to add an element to the List :";
//        cout << "\nPress -1 to exit: ";
//        cin >> choice;
//        // Check if the array is empty or filled before and after each operation
//        int i = 0;
//        if (obj.arr[i] != NULL) {
//            obj.IsFill();
//        }
//        else if (obj.arr[i] == NULL) {
//            obj.IsEmpty();
//        }
//        i++;
//        switch (choice) {
//        case 1:
//            obj.Rearrange();
//            cout << "\nRearranged List: ";
//            obj.Display();
//            break;
//        case 2:
//            obj.insert();
//            break;
//        case 3:
//            obj.remove();
//            break;
//        case 4:
//            obj.removeAt();
//            break;
//        case 5:
//            obj.Replace();
//            break;
//        case 6:
//            obj.size();
//            break;
//        case 7:
//            obj.get();
//            break;
//        case -1:
//            break;
//        default:
//            cout << "\nInvalid choice!";
//        }
//    }
//
//    return 0;
//}
