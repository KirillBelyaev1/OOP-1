#include "stdafx.h"
#include "array.h"
#include "MasOne.h"
#include "MasDouble.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void array::InfaArrayWrite(array *array, ofstream &ost)
	{
		CheckOutputFile(ost);
		ost << " ";
		array->WriteFile(ost);
	}
}