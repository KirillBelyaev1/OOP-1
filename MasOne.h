#include "stdafx.h"
#ifndef _MasOne
#define _MasOne

#include "array.h"

namespace arrays
{
	class mas_one : public array
	{
		int *mas1;

	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ofst);

		int CalculationSum();
		mas_one() {}
	};
}

#endif
