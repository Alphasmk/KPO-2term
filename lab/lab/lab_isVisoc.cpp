#include "stdafx.h"

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