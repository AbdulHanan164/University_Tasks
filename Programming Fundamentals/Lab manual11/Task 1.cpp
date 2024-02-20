#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
int i, j,a=0,b=0;
for (i = 1; i <= 5; ++i)
{
for (j = 1; j <= (5 - i); ++j)
cout << " ";
for (j = 1; j <= i; ++j)
cout << setw(1) << j+a;
a++;
for (j = (i - 1); j >= 1; --j)
cout << setw(1) << j+b;
b++;
cout << endl;
}
return 0;
}
