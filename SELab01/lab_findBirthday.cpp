#include "stdafx.h"

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