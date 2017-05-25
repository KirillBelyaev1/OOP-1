#include "stdafx.h"
#include "MasDouble.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int Mas_Double::CalculationSum()

	{
		int sum2 = 0;

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				sum2 = sum2 + mas2[i][j];
			}
				return sum2;
		}

	}
}