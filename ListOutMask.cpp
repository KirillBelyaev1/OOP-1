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

		while (temp != NULL) 
		{
			if (menu.find('1') != -1)
			{
				if (Mas_One* r = dynamic_cast<Mas_One*>(temp->array))
				{
					temp->array->InfaArrayWrite(temp->array, ofst);
				}
			}
			if (menu.find('2') != -1)
			{
				if (Mas_Double* c = dynamic_cast<Mas_Double*>(temp->array))
				{
					temp->array->InfaArrayWrite(temp->array, ofst);
				}
			}
			if (menu.find('3') != -1)
			{
				if (Mas_Triangle* t = dynamic_cast<Mas_Triangle*>(temp->array))
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