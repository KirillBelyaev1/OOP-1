#include "stdafx.h"
#ifndef _MasOne
#define _MasOne

#include "array.h"

namespace arrays
{
	class masOne : public array
	{
		int *mas1;
		//string name;

	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ofst);

		int CalculationSum();
		masOne() {}
	};
}

#endif
