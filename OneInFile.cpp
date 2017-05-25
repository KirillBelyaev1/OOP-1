#include "stdafx.h"
#include <string>
#include <fstream>
#include "MasOne.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void Mas_One::ReadFile(ifstream &ifst)
	{
		int p;
		ifst >> p;
		CheckWrongInput(ifst);
		//CheckField(p);
		this->p = (Mas_One::process)p;

		ifst >> razmer;
		CheckRazmer(razmer);

		mas1 = new int[razmer];
		for (int i = 0; i < razmer; i++)
		{
			ifst >> mas1[i];
		}
	}
}
