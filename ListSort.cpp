#include "stdafx.h"
#include "list.h"

using namespace std;

namespace arrays 
{
	void list::SortSum(bool sort) 
	{
		listElement *current = listHead, *temp = NULL, *previous = NULL;
		bool flag = false;

		do 
		{
			flag = false;
			current = listHead;
			while (current->next) 
			{
				if (current->array->Compare(current->next->array, sort))
				{
					if (current == listHead)
					{
						temp = current;
						current = temp->next;
						temp->next = current->next;
						current->next = temp;
						listHead = current;
						flag = true;
					}
					else
					{
						temp = current;
						current = temp->next;
						temp->next = current->next;
						current->next = temp;
						previous->next = current;
						flag = true;
					}
				}
				previous = current;
				current = current->next;
			}
		} while (flag);


	}
}
