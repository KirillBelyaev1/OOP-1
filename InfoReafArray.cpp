#include "stdafx.h"
#include "array.h"

#include "def.h"
#include "MasOne.h"
#include "MasDouble.h"
#include "triangle.h"

using namespace std;

namespace arrays {	
	array* array::InfaArrayPrint(ifstream &ifst) 
	{
		array *readarray;
		int key;
		CheckInputFile(ifst);
		ifst >> key;
		CheckWrongInput(ifst);
		CheckKey(key);

		switch (key) 
		{
		case 1:
		{
			readarray = new mas_one;
			break;
		}
		case 2:
		{
			readarray = new mas_double;
			break;
		}
		case 3:
		{
			readarray = new mas_triangle;
		}
			break;
		default:
			return NULL;
			break;
		};

		readarray->key = key;
		readarray->ReadFile(ifst);

		return readarray;
	}
}