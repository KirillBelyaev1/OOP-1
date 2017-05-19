#include "stdafx.h"
#ifndef _MasOne
#define _MasOne

#include "array.h"

namespace arrays
{
	class masOne : public array
	{
		int *mas1;
	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ost);
		int CalculationSum();
		masOne() {}
	};
}

#endif
