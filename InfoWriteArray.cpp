#include "stdafx.h"
#include "array.h"

#include "MasOne.h"
#include "MasDouble.h"

using namespace std;

namespace arrays
{
	void array::InfaArrayWrite(array *array, ofstream &ofst)
	{
		/*ofst << "It is ";

		switch (array->key)
		{
		case 1:
			ofst << "One matrix: ";
			break;
		case 2:
			ofst << "Double matrix: ";
			break;
		default:
			break;
		}

		ofst << "razmernost = ";

		switch (array->razmer)
		{
		case 1:
			ofst << "1";
			break;
		case 2:
			ofst << "2";
			break;
		default:
			break;
		}*/
		array->WriteFile(ofst);

	}


		
	
}