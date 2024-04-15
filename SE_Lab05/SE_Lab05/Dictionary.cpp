#include "stdafx.h"
#include "Dictionary.h"

namespace Dictionary
{
	Instance Create(const char name[DICTNAMEMAXSIZE], int size)
	{
		if (strlen(name) > DICTNAMEMAXSIZE)
		{
			throw THROW01;
		}

		if (size > DICTMAXSIZE)
		{
			throw THROW02;
		}

		Instance* instance = new Instance;
		strcpy_s(instance->name, name);
		instance->maxsize = size;
		instance->size = 0;
		instance->dictionary = new Entry[size];
		return *instance;
	}

	void AddEntry(Instance& inst, Entry ed)
	{
		if (inst.size >= inst.maxsize)
		{
			throw THROW03;
		}

		for (int i = 0; i < inst.size; i++)
		{
			if (inst.dictionary[i].id == ed.id)
			{
				throw THROW04;
			}
		}
		inst.dictionary[inst.size] = ed;
		inst.size++;
	}

	void DelEntry(Instance& inst, int id)
	{
		bool found = false;
		for (int i = 0; i < inst.size; i++)
		{
			if (inst.dictionary[i].id == id)
			{
				found = true;
				for (int j = i; j < inst.maxsize - 1; j++)
				{
					inst.dictionary[i] = inst.dictionary[i + 1];
				}
			}
		}
		if (!found)
		{
			throw THROW06;
		}
		inst.size--;
	}

	void UpdEntry(Instance& inst, int id, Entry new_ed)
	{
		bool found = false;

		for (int i = 0; i < inst.size; i++)
		{
			if (inst.dictionary[i].id == new_ed.id && inst.dictionary[i].id != id)
			{
				throw THROW08;
			}
		}

		for (int i = 0; i < inst.size; i++)
		{
			if (inst.dictionary[i].id == id)
			{
				found = true;
				inst.dictionary[i] = new_ed;
				break;
			}
		}

		if (!found)
		{
			throw THROW07;
		}
	}

	Entry GetEntry(Instance inst, int id)
	{
		for (int i = 0; i < inst.size; i++)
		{
			if (id == inst.dictionary[i].id)
			{
				return inst.dictionary[i];
			}
		}
		throw THROW05;
	}

	void Print(Instance d)
	{
		cout << "---------" << d.name << "---------" << endl;
		for (int i = 0; i < d.size; i++)
		{
			cout << d.dictionary[i].id << " " << d.dictionary[i].name << endl;
		}
	}

	void Delete(Instance& d)
	{
		delete[] d.dictionary;
	}
}
