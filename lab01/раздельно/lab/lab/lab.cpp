#include "stdafx.h"

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