#include "stdafx.h"
#include "list.h"
//#include"array.h"
using namespace std;

namespace arrays
{


	void container::Out(ofstream &ofst)
	{
		ofst << "List contents " << listLength << " elements." << endl;
		listElement *temp = listHead;
		int num = listLength;

		while (temp != NULL)
		{
			ofst << num << ": ";
			temp->array->InfaArrayWrite(temp->array, ofst);
			temp = temp->next;
			num--;
		}
	}
}
