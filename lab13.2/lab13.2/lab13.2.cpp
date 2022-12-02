#include <iostream>
using namespace std;
#define SQRMIN(F1,F2) (F1<F2 ? F1*F1 : F2*F2);
#define MAX(F1,F2) (F1>F2 ? F1 : F2);
#define N 5;
#define FUNC1MIN(x,y) (x+y);
#define FUNC2MIN(x,z) (x+z)
#define FUNC1MAX(x) (x*x)
#define FUNC2MAX(y,z) (5*abs(y-z))
#define DO_FIRST_PART(z) (((z) >= 5) && ((z) < 10)) ? true : false

#include <conio.h>

void main()
{
	int x, y, z = N;
	int ABS, SQR = 0, ADD_XY, ADD_XZ;
	char ch;
	cout << "Input 3 numbers" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	do {
#if N >= 1
		if (DO_FIRST_PART(z))
		{

			ADD_XY = FUNC1MIN(x, y);
			ADD_XZ = FUNC2MIN(x, z);
			cout << "W = " << SQRMIN(ADD_XY, ADD_XZ);
			cout << endl;
		}
#else
		{
			SQR = FUNC1MAX(x);
			ABS = FUNC2MAX(y, z);
			cout << "W = " << MAX(SQR, ABS);
			cout << endl;
		}
#endif
		cout << ("Repeat? y /n "); ch = _getch();

	} while (ch == 'y');
}