#include <iostream>
using namespace std;
class matrix {
public:
    int arr[3][3];
    int arr2[3][3];
    int arr3[3][3];
    matrix() {};
    void setmatrix() {//The function sets the matrix input
        cout << "Enter value of Matrix 3x3 One :" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
            }
        }
        cout << "Enter value of Matrix 3x3 Second :" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr2[i][j];
            }
        }
    }
    matrix operator*() {//this will use operator overloading where we multiple and add matrix
        matrix mult;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                mult.arr3[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    mult.arr3[i][j] += arr[i][k] * arr2[k][j];
                }
            }
        }
        return mult;
    }
    void display() {//function used to display the final result of amtrix
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << arr3[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    matrix obj;
    obj.setmatrix();
    obj = *obj;
    cout << "The Matrix after multiplication and Addition is:"<<endl;
    obj.display();

    return 0;
}

