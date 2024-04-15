#include <iostream>
using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date
{
	day dd;
	month mm;
	year yyyy;
};

bool operator<(const Date& date1, const Date& date2)
{
	return (date1.yyyy < date2.yyyy) || ((date1.yyyy == date2.yyyy) && (date1.mm < date2.mm)) ||
		   ((date1.yyyy == date2.yyyy) && (date1.mm == date2.mm) && (date1.dd < date2.dd));
}

bool operator>(const Date& date1, const Date& date2)
{
	return (date1.yyyy > date2.yyyy) || ((date1.yyyy == date2.yyyy) && (date1.mm > date2.mm)) ||
		((date1.yyyy == date2.yyyy) && (date1.mm == date2.mm) && (date1.dd > date2.dd));
}

bool operator==(const Date& date1, const Date& date2)
{
	return (date1.yyyy == date2.yyyy) && (date1.mm == date2.mm) && (date1.dd == date2.dd);
}



int main()
{
	setlocale(LC_CTYPE, "rus");
	Date date1 = { 7, 1, 1980 };
	Date date2 = { 7, 2, 1993 };
	Date date3 = { 7, 1, 1980 };

	if (date1 < date2)
	{
		cout << "Истина" << endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}

	if (date1 > date2)
	{
		cout << "Истина" << endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}

	if (date1 == date2)
	{
		cout << "Истина" << endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}

	if (date1 == date3)
	{
		cout << "Истина" << endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}
}