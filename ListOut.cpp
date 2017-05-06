#include "stdafx.h"
#include "list.h"

using namespace std;

namespace arrays 
{
	void list::Out(ofstream &outFileStream) 
	{
		outFileStream << "List contents " << listLength << " elements." << endl;
		listElement *temp = listHead;
		int num = listLength;

		while (temp != NULL) {
			outFileStream << num << ": ";
			temp->array->InfaArrayWrite(temp->array, outFileStream);
			temp = temp->next;
			num--;
		}
	}
}
