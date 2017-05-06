#include "stdafx.h"
#include "list.h"

using namespace std;

namespace arrays
{
	void container::Out(ofstream &ofst)
	{
		ofst << "Container contents " << listLength << " elements." << endl;
		listElement *temp = listHead;
		int num = listLength;
		while (temp != NULL) 
		{

			ofst << num << ": ";

			temp->array->InfaArrayWrite((temp->array), ofst);
			temp = temp->next;
			num--;
		}
	}
}
