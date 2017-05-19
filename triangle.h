#include "stdafx.h"
#ifndef _triangle
#define _triangle
#include <fstream>
#include "array.h"

namespace arrays
{
	class masTriangle : public array
	{
	public:
		int **mas3;
	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ost);
		int CalculationSum();
		masTriangle() {}
	};
}

#endif