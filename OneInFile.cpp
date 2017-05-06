#include "stdafx.h"
#include "MasOne.h"

using namespace std;

namespace arrays 
{
	void mas_one::ReadFile(ifstream &ifst) 
	{
		ifst >> razmer;
		mas1 = new int[razmer];
		for (int i = 0; i < razmer; i++)
			ifst >> mas1[i];
	}
}
