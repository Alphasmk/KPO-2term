#include <iostream>
#include <limits.h>
using namespace std;

int func(int(*)(), int);
int sum();

int main()
{
	int X = 21, Y = 22, Z = 23; // 2
	double S = 1.0 + 12;
	bool fst = true, snd = false; // 4
	char vten = 'T'; // 5
	char vtru = 'Т'; // 6
	wchar_t peren = 'S'; // 7
	wchar_t perru = 'С'; // 8
	short fstsh = X, sndsh = -X; // 9
	// 21(10) = 15(16)
	// 21(10) = -15(16)
	short maxsh = SHRT_MAX, minsh = SHRT_MIN; // 10
	unsigned short maxunsh = 0xffff, minunsh = 0x0000; // 11
	int iny = Y, inymin = -Y; // 12
	// Y = 0x00000016 -Y = 0xffffffea
	int inmax = 0x7fffffff, inmin = 0x80000000; // 13
	unsigned int uinmax = 0xffffffff, uinmin = 0x00000000; // 14
	long zlg = 0x00000017, zlgmin = 0xffffffe9; // 15
	long lmax = 0x7fffffff, lmin = 0x80000000; // 16
	unsigned long unlmax = 0xffffffff, unlmin = 0x00000000; // 17
	float sfl = S, sflmin = -S; // 18
	// S = 13.000 -S = -13.000
	float a = INFINITY;
	float b = -INFINITY;
	float c = -NAN; // 19
	char* vtenptr = &vten + 3;
	wchar_t* perenptr = &peren + 3;
	short* maxshptr = &maxsh + 3;
	int* xptr = &X + 3;
	float* sflptr = &sfl + 3;
	double* sptr = &S + 3; // 20
	cout << func(sum, X) << endl;
}

int func(int(*)(), int X)
{
	int summa = sum() + X;
	return summa;
}

int sum()
{
	int k = 20 + 30;
	return k;
}