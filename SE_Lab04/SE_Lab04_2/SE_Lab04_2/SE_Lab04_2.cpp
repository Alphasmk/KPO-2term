#include <iostream>
using namespace std;

typedef unsigned ss;
typedef unsigned mm;
typedef unsigned hh;

struct timer
{
	ss seconds;
	mm minutes;
	hh hours;
};

bool operator>(const timer& time1, const timer& time2)
{
	return(time1.hours > time2.hours) || ((time1.hours == time2.hours) && (time1.minutes > time2.minutes))
		  || ((time1.hours == time2.hours) && (time1.minutes == time2.minutes) && (time1.seconds > time2.seconds));
}

bool operator<(const timer& time1, const timer& time2)
{
	return(time1.hours < time2.hours) || ((time1.hours == time2.hours) && (time1.minutes < time2.minutes))
		  || ((time1.hours == time2.hours) && (time1.minutes == time2.minutes) && (time1.seconds < time2.seconds));
}

bool operator==(const timer& time1, const timer& time2)
{
	return(time1.hours == time2.hours) && (time1.minutes == time2.minutes) && (time1.seconds == time2.seconds);
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	timer time1 = { 12, 11, 14 };
	timer time2 = { 14, 12, 16 };
	timer time3 = { 12, 11, 14 };
	
	cout << "Формат времени: СС:ММ:ЧЧ" << endl;
	cout << "Время 1: " << time1.seconds << ":" << time1.minutes << ":" << time1.hours << endl;
	cout << "Время 2: " << time2.seconds << ":" << time2.minutes << ":" << time2.hours << endl;
	cout << "Время 3: " << time3.seconds << ":" << time3.minutes << ":" << time3.hours << endl << endl;

	cout << "Время 1 > Время 2: ";

	if (time1 > time2)
	{
		cout << "Истина" << endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}

	cout << "Время 1 < Время 2: ";
	if (time1 < time2)
	{
		cout << "Истина" << endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}

	cout << "Время 1 = Время 2: ";
	if (time1 == time2)
	{
		cout << "Истина" << endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}

	cout << "Время 1 = Время 3: ";
	if (time1 == time3)
	{
		cout << "Истина" << endl;
	}
	else
	{
		cout << "Ложь" << endl;
	}
}