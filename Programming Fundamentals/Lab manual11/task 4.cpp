#include<iostream>
using namespace std;
int main ()
{
    int m=3, n=3, i, j, arr[10][10];
        for (i = 0; i < m; i++)
        for (j = 0; j < n; j++){
		
		cout << "The elements of matrix are" ;
            cin >> arr[i][j];
	}
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
		
            cout << arr[i][j] << "  ";
        cout << endl;
    }
cout <<"Diognal Elements are"<<endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                cout<< arr[i][j]<<" ";
            else
                cout <<'0'<<" ";
        }
        cout << "\n";
    }

    return 0;
}

