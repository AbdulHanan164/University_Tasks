//#include<iostream>
//using namespace std;
//int binary_search(int* arr, int target, int left, int right) {
//    if (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] == target) {
//            // Target found at index 'mid'.
//            return mid;
//        }
//        else if (arr[mid] < target) {// Target is in the right half of the current search range          
//            return binary_search(arr, target, mid + 1, right);
//        }
//        else {// Target is in the left half of the current search range            
//            return binary_search(arr, target, left, mid - 1);
//        }
//    }
//    // Target not found in the array
//    return -1;
//}
//int main() {
//    int* arr;
//    int size;
//    cout << "Enter size of the array in sorted order: ";
//    cin >> size;
//    arr = new int[size];
//    for (int i = 0; i < size; i++) {
//        cout << "Enter value at index " << i << " : ";
//        cin >> arr[i];
//    }
//    int target;
//    cout << "Enter a target element: ";
//    cin >> target;
//    int result = binary_search(arr, target, 0, size - 1);
//    if (result != -1) {
//        cout << "Target found at index " << result << endl;
//    }
//    else {
//        cout << "Target not found in the array" << endl;
//    }
//    delete[] arr;
//    return 0;
//}
