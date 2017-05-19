#ifndef _MasDouble
#define _MasDouble

#include "array.h"

namespace arrays 
{
	class masDouble : public array
	{
		int** mas2;
	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ost);
		int CalculationSum();
		masDouble() {}
	};
}

#endif
