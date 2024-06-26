#include "stdafx.h"
#include "Varparm.h"
using namespace Varparm;
using namespace std;

int main()
{
	cout << "ivarparm" << endl;
	cout << "1: " << ivarparm(1) << endl;
	cout << "2: " << ivarparm(1, 1) << endl;
	cout << "3: " << ivarparm(2, 1, 2) << endl;
	cout << "7: " << ivarparm(7, 1, 2, 3, 4, 5, 6, 7) << endl;

	cout << "svarparm" << endl;
	cout << "1: " << svarparm(1) << endl;
	cout << "2: " << svarparm(1, 1) << endl;
	cout << "3: " << svarparm(2, 1, 2) << endl;
	cout << "7: " << svarparm(7, 1, 2, 3, 4, 5, 6, 7) << endl;

	cout << "fvarparm" << endl;
	cout << "1: " << fvarparm(FLT_MAX) << endl;
	cout << "2: " << fvarparm(1.0, FLT_MAX) << endl;
	cout << "3: " << fvarparm(1.0, 2.0, FLT_MAX) << endl;
	cout << "7: " << fvarparm(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, FLT_MAX) << endl;

	cout << "dvarparm" << endl;
	cout << "1: " << dvarparm(DBL_MAX) << endl;
	cout << "2: " << dvarparm(1.0, DBL_MAX) << endl;
	cout << "3: " << dvarparm(1.0, 2.0, DBL_MAX) << endl;
	cout << "7: " << dvarparm(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, DBL_MAX) << endl;
}