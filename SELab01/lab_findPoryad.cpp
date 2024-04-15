#include "stdafx.h"
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
