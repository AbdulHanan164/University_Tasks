#include <iostream>
using namespace std;
int main()
{
	int i=1,a,b,c,d,e=0,f;
	char grade;
	while(i<=10)
	{
		cout<<"Enter Grade";
		cin>>grade;
		switch(grade)
		{
		case 'A':
			a++;
			break;
			case 'B':
				b++;
				break;
				case 'C':
					c++;
					break;
					case 'D':
						d++;
						break;
						case 'E':
							e++;
							break;
							case 'F':
								f++;
								break;
								default:
								cout<<"Invalid grade";
	}
	i++;
}
cout<<"A "<<a<<" B "<<b<<" C "<<c<<" D "<<d<<" E "<<e<<" F "<<f<<endl;
	return 0;
}
