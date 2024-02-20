//#include <iostream>
//using namespace std;
//template <typename T>
//void sorting(T arr[], T size) {//function implements the bubble sort algorithm which has a time complexity of O(n^2).
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {   // swap arr[j] and arr[j+1]
//                T temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//template <typename T>
//void Max_Number(T arr[],T size) {//Finding Maximum number using O(n) time complexity.
//    T Max=arr[0];
//    for (int i = 0; i < size; i++)
//    {
//            if (Max<arr[i])
//            {
//                Max = arr[i];
//            }
//        }
//    cout << Max;
//}
//template <typename T>
//void Min_Number(T arr[], T size) {//Finding Minimum number using O(n) time complexity.
//    T Min = arr[0];
//    for (int i = 0; i < size; i++)
//    {
//        if (Min > arr[i])
//        {
//            Min = arr[i];
//
//        }
//    }
//    cout<< Min;
//}
//int main() {
//    int arr[10];
//    for (int i = 0; i < 10; i++) {//Inputs values in loop.
//        cout << "Enter Value at Index [" << i+1 << "] = ";
//        cin >> arr[i];
//    }
//    sorting(arr, 10);//calling sorting fuction
//    cout << "Sorted Array:\n";
//    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << "\n Maximum Element in a Array is :";
//    Max_Number(arr,10);//calling maximum number function.
//    cout << "\n Minimum Element in a Array is :";
//    Min_Number(arr, 10);//calling mininum number function 
//    return 0;
//}
