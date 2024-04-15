#include <iostream>
#include <string>
using namespace std;

bool isVisoc(int);
int findPoryad(int, int);
int findBirthday(int, int);
void findPrazdnik(int, int);

int spisok[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string months[12] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };

int main()
{
	setlocale(LC_CTYPE, "rus");
	int date, year, day, month;
	do {
		cout << "Введите дату: "; cin >> date;
		year = date % 10000;
		month = ((date % 1000000) - year) / 10000;
		day = (date - year - month * 10000) / 1000000;
	} while (month < 1 || month > 12 || year < 1000 || year > 9999 || day < 1 || day > 31);

	cout << "Месяц введенной даты: " << months[month - 1] << endl;

	findPrazdnik(month, day);

	if (isVisoc(year))
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

void findPrazdnik(int month, int day)
{
	if (day == 2 && month == 8)
	{
		cout << "С днем ВДВ!" << endl;
	}
	else if(day == 24 && month == 4)
	{
		cout << "С днем красного кирпича!" << endl;
	}
	else if (day == 29 && month == 8)
	{
		cout << "День рождения Мухи-Цокотухи!" << endl;
	}
	else if (day == 20 && month == 4)
	{
		cout << "День травы!" << endl;
	}
}
