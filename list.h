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
		//void In(ifstream &inFileStream);
		//void Out(ofstream &outFileStream);
		void Out1(ofstream &ofst, string menu);
		void SortSum(bool sort);

		void In(ifstream &ifst);
		void Out(ofstream &ofst);
		void Clear();
		void Init();
		list() { Init(); };
		~list() { Clear(); }
	};
}
#endif