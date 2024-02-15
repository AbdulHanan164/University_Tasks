//#include <iostream>
//using namespace std;
//// Function to print Minimum element using recursion
//int findMini(int* arr, int size)
//{
//    // if size = 1 means the whole array has to be traverse
//    if (size == 1)
//        return arr[0];
//    // Find the minimum of the remaining elements 
//    int miniRemain = findMini(arr, size - 1);
//    return (arr[size - 1] < miniRemain) ? arr[size - 1] : miniRemain;
//}
//int main()
//{
//    int size;
//    cout << "Enter size of the array: ";
//    cin >> size;
//    int* arr = new int[size];
//    for (int i = 0; i < size; i++) {
//        cout << "Enter index number of array " << i + 1 << ": ";
//        cin >> arr[i];
//    }
//    int minNum = findMini(arr, size);
//    cout << "The minimum element in the array is: " << minNum << endl;
//    delete[] arr; 
//    return 0;
//}
