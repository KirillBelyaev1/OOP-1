#include "stdafx.h"
#include "list.h"
#include <iostream>
#include "MasDouble.h"
#include "MasOne.h"
#include "triangle.h"

using namespace std;

namespace arrays
{
	void list::Out1(ofstream &ofst, string menu)
	{
		ofst << "List contents " << listLength << " elements." << endl;
		listElement *temp = listHead;
		int num = listLength;

		while (temp != NULL) {
			if (menu.find('1') != -1)
			{
				if (mas_one* r = dynamic_cast<mas_one*>(temp->array))
				{
					temp->array->InfaArrayWrite(temp->array, ofst);
				}
			}
			if (menu.find('2') != -1)
			{
				if (mas_double* c = dynamic_cast<mas_double*>(temp->array))
				{
					temp->array->InfaArrayWrite(temp->array, ofst);
				}
			}
			if (menu.find('3') != -1)
			{
				if (mas_triangle* t = dynamic_cast<mas_triangle*>(temp->array))
				{
					temp->array->InfaArrayWrite(temp->array, ofst);
				}
			}
			if (menu.find('0') != -1)
			{
				temp->array->InfaArrayWrite(temp->array, ofst);
			}
			temp = temp->next;
		}
	}
}