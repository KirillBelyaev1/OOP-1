#include "stdafx.h"
#include <string>
#include <fstream>
#include "MasOne.h"

using namespace std;

namespace arrays
{
	void mas_one::ReadFile(ifstream &ifst)
	{

		int p;
		ifst >> p;
		this->p = (mas_one::process)p;

		ifst >> razmer;

		mas1 = new int[razmer];
		for (int i = 0; i < razmer; i++)
			ifst >> mas1[i];
	}
}
