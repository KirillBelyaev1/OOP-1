#include "stdafx.h"
#include "MasDouble.h"
#include "array.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void mas_double::ReadFile(ifstream &ifst)
	{
		int p;
		ifst >> p;
		CheckWrongInput(ifst);
		this->p = (mas_double::process)p;

		ifst >> razmer;
		CheckRazmer(razmer);
		CheckWrongInput(ifst);
		mas2 = new int*[razmer];

		for (int i = 0; i < razmer; i++)
		{
			mas2[i] = new int[razmer];
		}


		//ifst >> year;

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				ifst >> mas2[i][j];
			}
		}

	}

}
