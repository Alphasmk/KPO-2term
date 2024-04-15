#include <iostream>
using namespace std;

bool isVisoc(int);
int findPoryad(int, int);
int findBirthday(int, int);

int spisok[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	setlocale(LC_CTYPE, "rus");
	int date, year, day, month;
	do {
		cout << "Введите дату: "; cin >> date;
		year = date % 10000;
		month = ((date % 1000000) - year) / 10000;
		day = (date - year - month * 10000) / 1000000;
	} while (month < 0 || month > 12 || year < 1000 || year > 9999 || day < 0 || day > 31 || date < 10000000 || date > 99999999);
	if (isVisoc(date))
	{
		cout << "Год является високосным";
	}
	else
	{
		cout << "Год не является високосным";
	}
	printf("\n");
	cout << "Порядковый номер дня: " << findPoryad(day, month) << endl;
	cout << "Дней до дня рождения: " << findBirthday(day, month) << endl;
	system("pause");
}

bool isVisoc(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		return true;
	}
	else {
		return false;
	}
}

int findPoryad(int day, int month)
{
	int spisok[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int	serial, sum = 0;
	for (int i = 0; i < month - 1; i++)
	{
		sum += spisok[i];
	}
	serial = sum + day;
	return serial;
}

int findBirthday(int day, int month)
{
	int spisok[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int bday = 19, bmonth = 12, sum = 0, count, precount, aftcount = bday;

	if (month == 12 && bday < day)
	{
		count = 0;
		precount = spisok[11] - day;
		for (int i = count; i < bmonth - 1; i++)
		{
			sum += spisok[i];
		}
		sum = sum + precount + aftcount;
		return sum;
	}
	else if (month == 12 && bday > day)
	{
		sum = bday - day;
		return sum;
	}
	else if (month == 12 && bday == day)
	{
		return 0;
	}
	else
	{
		precount = spisok[month - 1] - day;
		count = month;
		for (int i = count; i < bmonth - 1; i++)
		{
			sum += spisok[i];
		}
		sum = sum + precount + aftcount;
		return sum;
	}
}