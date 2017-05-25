#ifndef _MasDouble
#define _MasDouble

#include "array.h"

namespace arrays 
{
	class Mas_Double : public array
	{
		//int razmer;
		int** mas2;
		//int year;

	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ofst);

		int CalculationSum();
		Mas_Double() {}
	};
}

#endif
