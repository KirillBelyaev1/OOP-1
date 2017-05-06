
#include "stdafx.h"
#include "list.h"

namespace arrays
{
	void container::Clear()
	{
		while (listHead != NULL)
		{
			listElement *temp = listHead->next;
			delete listHead;
			listHead = temp;
		}
		listLength = 0;
	}
	void container::Init()
	{
		listHead = NULL;
		listLength = 0;
	}
}
