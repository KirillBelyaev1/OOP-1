#include "stdafx.h"
#ifndef _list
#define _list

#include "array.h"

namespace arrays
{
	//struct array;

	struct listElement
	{
		array *array;
		listElement *next = NULL;
	};

	class list
	{
		listElement *listHead;
		int listLength = 0;

	public:
		void In(ifstream &inFileStream);
		void Out(ofstream &outFileStream);
		void Out1(ofstream &ofst, string menu);
		void Clear();
		void Init();
		list() { Init(); };
		~list() { Clear(); }
	};
}
#endif