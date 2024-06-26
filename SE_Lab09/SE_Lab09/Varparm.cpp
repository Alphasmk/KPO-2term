#include "Varparm.h"
#include "stdafx.h"
namespace Varparm
{
	int ivarparm(int n, ...)
	{
		int mul = 1;
		va_list args;
		va_start(args, n);
		for (int i = 0; i < n; i++)
		{
			mul *= va_arg(args, int);
		}
		va_end(args);
		return mul;
	}

	int svarparm(short n, ...)
	{
		va_list args;
		va_start(args, n);
		short max = SHRT_MIN;
		short buf;
		for (int i = 0; i < n; i++)
		{
			buf = va_arg(args, short);
			if (buf > max)
			{
				max = buf;
			}
		}
		va_end(args);
		return max;
	}

	double fvarparm(float n, ...)
	{
		va_list args;
		double sum = 0;
		va_start(args, n);
		float k = n;
		while (k != FLT_MAX)
		{
			sum += k;
			k = va_arg(args, double);
		}
		va_end(args);
		return sum;
	}

	double dvarparm(double n, ...)
	{
		va_list args;
		double sum = 0;
		va_start(args, n);
		double k = n;
		while (k != DBL_MAX)
		{
			sum += k;
			k = va_arg(args, double);
		}
		va_end(args);
		return sum;
	}
}