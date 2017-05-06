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
	class container
	{
		listElement *listHead;
		int listLength = 0;

	public:
		void In(ifstream &inFileStream);
		void Out(ofstream &outFileStream);
		void Clear();
		void Init();
		container() { Init(); };
		~container() { Clear(); }
	};
}
#endif