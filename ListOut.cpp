#include "stdafx.h"
#include "list.h"
//#include"array.h"
using namespace std;

namespace arrays 
{
	void list::Out(ofstream &outStream) 
	{
		outStream << "Список содержит " << listLength << " элементов." << endl;
		listElement *temp = listHead;
		int num = listLength;

		while (temp != NULL) 
		{
			outStream << num << ": ";
			temp->array->InfaArrayWrite(temp->array, outStream);
			temp = temp->next;
			num--;
		}
	}
}
