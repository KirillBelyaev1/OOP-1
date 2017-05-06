#include "stdafx.h"
#include "triangle.h"

using namespace std;

namespace arrays
{
	void mas_triangle::ReadFile(ifstream &ifst)
	{
		ifst >> razmer;
		mas3 = new int*[razmer];
		for (int i = 0; i < razmer; i++)
		{
			mas3[i] = new int[razmer];
		}

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				if (i >= j)

				ifst >> mas3[i][j];
			}
		}
	}
}