#include "stdafx.h"
#include "array.h"
#include "MasOne.h"
#include "MasDouble.h"

using namespace std;

namespace arrays
{
	void array::InfaArrayWrite(array *array, ofstream &ofst)
	{
		ofst << "It is ";

		/*switch (array->key)
		{
		case 1:
			ofst << "MasOne\n";
			break;
		case 2:
			ofst << "MasDouble\n";
			break;
		case 3:
			ofst << "MasThree\n";
			break;
		default:
			break;
		}*/
		array->WriteFile(ofst);

	}
}