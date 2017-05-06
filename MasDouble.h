#ifndef _MasDouble
#define _MasDouble

#include "array.h"

namespace arrays 
{
	class mas_double : public array
	{
		//int razmer;
		int** mas2;
		//int year;

	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ofst);

		int CalculationSum();
		mas_double() {}
	};
}

#endif
