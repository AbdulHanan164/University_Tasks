#include <iostream>
using namespace std;

int main() {
   int arr[10][10], transarr[10][10], row, column;

   cout << "Enter rows of the matrix";
   cin >> row;
   cout<<"Enter columns: ";
   cin>>column;
   cout << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a ";
         cin >> arr[i][j];
      }
   }
   cout <<endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << arr[i][j];
         if (j == column - 1)
            cout << endl;
      }
   }
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transarr[i][j] = arr[i][j];
      }
   cout << "Transpose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transarr[i][j];
         if (j == row - 1)
            cout << endl ;
      }

   return 0;
}

