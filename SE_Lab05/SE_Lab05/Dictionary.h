#include "stdafx.h"
#pragma once
#define DICTNAMEMAXSIZE 20
#define DICTMAXSIZE 100
#define ENTRYNAMEMAXSIZE 30
namespace Dictionary
{
	struct Entry
	{
		int id;
		char name[ENTRYNAMEMAXSIZE];
	};

	struct Instance
	{
		char name[DICTNAMEMAXSIZE];
		int maxsize;
		int size;
		Entry* dictionary;
	};

	Instance Create(const char name[DICTNAMEMAXSIZE], int size);

	void AddEntry(Instance& inst, Entry ed);

	void DelEntry(Instance& inst, int id);

	void UpdEntry(Instance& inst, int id, Entry new_ed);

	Entry GetEntry(Instance inst, int id);

	void Print(Instance d);

	void Delete(Instance& d);
}