
#include "stdafx.h"
#include "list.h"
#include "array.h"
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

	void container::Init() {listHead = NULL; }
	
}
