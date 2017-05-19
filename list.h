#include "stdafx.h"
#ifndef _list
#define _list
#include "array.h"

namespace arrays
{
	struct listElement
	{
		array *array;
		listElement *next = NULL;
	};
	class list
	{
		listElement *listHead;
		int listLength;
	public:
		void Out1(ofstream &ost, string menu);
		void SortSum(bool sort);
		void In(ifstream &ifst);
		void Out(ofstream &ost);
		void Clear();
		void Init();
		list() { Init(); };
		~list() { Clear(); }
	};
}
#endif