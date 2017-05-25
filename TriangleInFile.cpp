#include "stdafx.h"
#include "triangle.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void Mas_Triangle::ReadFile(ifstream &ifst)
	{
		int p;
		ifst >> p;
		CheckWrongInput(ifst);
		this->p = (Mas_Triangle::process)p;

		ifst >> razmer;
		CheckRazmer(razmer);
		CheckWrongInput(ifst);
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
				{
					ifst >> mas3[i][j];
				}
			}
		}
	}
}