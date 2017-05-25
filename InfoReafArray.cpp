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
		array *ReadArray;
		int key;
		CheckInputFile(ifst);
		ifst >> key;
		CheckWrongInput(ifst);
		CheckKey(key);

		switch (key) 
		{
		case 1:
		{
			ReadArray = new masOne;
			break;
		}
		case 2:
		{
			ReadArray = new masDouble;
			break;
		}
		case 3:
		{
			ReadArray = new masTriangle;
		}
			break;
		default:
			return NULL;
			break;
		};

		ReadArray->key = key;
		ReadArray->ReadFile(ifst);

		return ReadArray;
	}
}