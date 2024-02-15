//#include<iostream>
//using namespace std;
//class ListADT {
//private:
//	int Arr[5];
//	int Arr2[5];
//	int Arr3[10]; // Increased size for the union array to accommodate all possible elements
//public:
//	ListADT() {}
//	void Array() {
//		cout << "Enter elements for Array 1: ";
//		for (int i = 0; i < 5; i++) {
//			cin >> Arr[i];
//		}
//	}
//	void Array2() {
//		cout << "Enter elements for Array 2: ";
//		for (int i = 0; i < 5; i++) {
//			cin >> Arr2[i];
//		}
//	}
//	void intersection() {
//		cout << "Intersection of two lists are: ";
//		int count = 0; // Keep track of the number of intersection elements
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++) {
//				if (Arr[i] == Arr2[j]) {
//					Arr3[count++] = Arr[i]; // Store the intersection element
//				}
//			}
//		}
//		// Print the intersection elements
//		for (int i = 0; i < count; i++) {
//			cout << Arr3[i] << " ";
//		}
//		cout << endl;
//	}
//	void setUnion() {
//		cout << "Union of two lists are: ";
//		int count = 0; // Keep track of the number of union elements
//
//		// Copy elements from Arr to Arr3
//		for (int i = 0; i < 5; i++) {
//			Arr3[count++] = Arr[i];
//		}
//		// Check for duplicate elements while adding elements from Arr2 to Arr3
//		for (int i = 0; i < 5; i++) {
//			bool isDuplicate = false;
//			for (int j = 0; j < count; j++) {
//				if (Arr2[i] == Arr3[j]) {
//					isDuplicate = true;
//					break;
//				}
//			}
//			if (!isDuplicate) {
//				Arr3[count++] = Arr2[i];
//			}
//		}
//		// Print the union elements
//		for (int i = 0; i < count; i++) {
//			cout << Arr3[i] << " ";
//		}
//		cout << endl;
//	}
//};
//int main() {
//	ListADT obj;
//	obj.Array();
//	obj.Array2();
//	obj.intersection();
//	obj.setUnion();
//	system("pause");
//	return 0;
//}
