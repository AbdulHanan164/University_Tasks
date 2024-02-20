#include<iostream>
using namespace std;
template <typename T>//using template
void sorting(T arr[], T size) {//Using Sorting Method to sort the array using bubble sort 
	T temp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	
	}cout << "Sorted Array is :";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
template<typename T>
void speration(T arr[],T size) {//using speration of a varaibles which show even and odds numbers in a array
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			cout << "\nEven Number at index [" << i +1<< "] is " << arr[i]<<endl;
		}
		else {
			cout << "\nOdd Number at index [" << i+1 << "] is " << arr[i]<<endl;
		}
	}
}template<typename T>
void Average(T arr[], T size) {//This Method first of all calculate sum and then print Average
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << "\nSum is :" << sum;
	T Average = 0;
	Average = sum / size;
	cout << "\tAverage is :" << Average;
}
int main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {//Taking input of the array
		cout << "Enter Value at Index [" << i+1 << "] = ";
		cin >> arr[i];
	}
	sorting(arr, 10);//calling the sort method to sort array
	cout << "\nAfter Speration of Even Odd the values are :";
	speration(arr, 10);//callimg speration method to sperate even and odds
	cout << "After Finding Sum and Average of Array :" << endl;
	Average(arr, 10); cout<<"%";//calling Average method which take sum and print the Average 
	return 0;
}