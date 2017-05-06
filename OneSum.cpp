#include "stdafx.h"
#include "MasOne.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int mas_one::CalculationSum()

	{
		int sum1 = 0;
		for (int i = 0; i < razmer; i++)
			sum1 = sum1 + mas1[i];
		return sum1;

	}
}