#include "stdafx.h"
#include "Dictionary.h"
//#define TEST_CREATE_01
//#define TEST_CREATE_02
//#define TEST_ADDENTRY_03
//#define TEST_ADDENTRY_04
//#define TEST_GETENTRY_05
//#define TEST_GETENTRY_06
//#define TEST_UPDENTRY_07
//#define TEST_UPDENTRY_08
#define TEST_DICTIONARY
using namespace Dictionary;
int main()
{
	setlocale(LC_CTYPE, "rus");
	try
	{
		#ifdef TEST_DICTIONARY
		Instance d1;
		#ifdef TEST_CREATE_01
		d1 = Create("Преподавателиииииииииииииииииииииииииии", 5);
		#endif
		#ifdef TEST_CREATE_02
		d1 = Create("Преподаватели", 101);
		#endif
		d1 = Create("Преподаватели", 5);
		Entry e1 = { 1, "Гладкий" }, e2 = { 2, "Веялкин" }, e3 = { 3, "Смелов" }, e4 = { 4, "Урбанович" }, e5 = { 5, "Пацей" }, e6 = { 1, "Иванов" }, e7 = { 7, "1112пппппппп" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		#ifdef TEST_ADDENTRY_04
		AddEntry(d1, e6);
		#endif
		#ifdef TEST_ADDENTRY_03
		AddEntry(d1, e7);
		#endif
		Entry ex2;
		#ifdef TEST_GETENTRY_05
		ex2 = GetEntry(d1, 15);
		#endif
		ex2 = GetEntry(d1, 4);
		#ifdef TEST_DELENTRY_06
		DelEntry(d1, 6);
		#endif
		DelEntry(d1, 2);
		Entry newentry1 = { 6, "Гурин" }, newentry2 = { 1, "456rere" };
		#ifdef TEST_UPDENTRY_07
		UpdEntry(d1, 6, newentry1);
		#endif
		#ifdef TEST_UPDENTRY_08
		UpdEntry(d1, 3, newentry1);
		#else
		UpdEntry(d1, 3, newentry1);
		#endif
		Print(d1);
		Delete(d1);
        #endif
		Instance d2 = Create("Студенты", 5);
		Entry s1 = { 1, "Иванов" }, s2 = { 2, "Петров" }, s3 = { 3, "Сидоров" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Entry newentry3 = { 3, "Николаев" };
		UpdEntry(d2, 3, newentry3);
		Print(d2);
		Delete(d2);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
}