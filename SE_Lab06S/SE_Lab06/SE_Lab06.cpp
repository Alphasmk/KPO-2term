#include <iostream>
#include <locale>
#include "../SE_Lab06L/framework.h"
#pragma comment(lib, "E:\\����\\���\\SE_Lab06S\\x64\\Debug\\SE_Lab06L.lib")
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
		d1 = Create("���������������������������������������", 5);
#endif
#ifdef TEST_CREATE_02
		d1 = Create("�������������", 101);
#endif
		d1 = Create("�������������", 5);
		Entry e1 = { 1, "�������" }, e2 = { 2, "�������" }, e3 = { 3, "������" }, e4 = { 4, "���������" }, e5 = { 5, "�����" }, e6 = { 1, "������" }, e7 = { 7, "1112��������" };
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
		Entry newentry1 = { 6, "�����" }, newentry2 = { 1, "456rere" };
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
		Instance d2 = Create("��������", 5);
		Entry s1 = { 1, "������" }, s2 = { 2, "������" }, s3 = { 3, "�������" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Entry newentry3 = { 3, "��������" };
		UpdEntry(d2, 3, newentry3);
		Print(d2);
		Delete(d2);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
}