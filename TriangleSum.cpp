#include "stdafx.h"
#include "triangle.h"
#include <fstream>

using namespace std;

namespace arrays
{
	int masTriangle::CalculationSum()

	{
		int sum3 = 0;

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				sum3 = sum3 + mas3[i][j];
			}
			return sum3;
		}
	}
}