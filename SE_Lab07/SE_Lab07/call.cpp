#include "call.h"

int _cdecl funcA(int x, int y, int z)
{
	return x+y+z;
}

int _stdcall funcB(int& x, int y, int z)
{
	return x*y*z;
}

int _fastcall funcC(int x, int y, int z, int k)
{
	return x+y + z+k;
}
