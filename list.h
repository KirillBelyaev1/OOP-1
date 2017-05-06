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
			int listLength;

	public:
		void SortSum(bool sort);

		void In(ifstream &ifst);
		void Out(ofstream &ofst);
		void Clear();
		void Init();
		container() { Init(); };
		~container() { Clear(); }
	};
}
#endif