#include "stdafx.h"
#include "array.h"

#include "MasOne.h"
#include "MasDouble.h"

using namespace std;

namespace arrays 
{	
	array* array::InfaArrayPrint(ifstream &ifst) 
	{
		array *readarray;
		int key;
		ifst >> key;

		switch (key) 
		{
		case 1:
			readarray = new mas_one;			
			break;
		case 2:
			readarray = new mas_double;
			break;
		default:
			return NULL;
			break;
		}
		readarray->key = key;
		readarray->ReadFile(ifst);

		return readarray;
	}
}