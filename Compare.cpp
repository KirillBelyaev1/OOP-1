#include "stdafx.h"
#include "array.h"

using namespace std;

namespace arrays 
{
	bool array::Compare(array *next, bool Sort)
	{
		if (Sort)
		{
			if (CalculationSum() > next->CalculationSum())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (CalculationSum() < next->CalculationSum())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

