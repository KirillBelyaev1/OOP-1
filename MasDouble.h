#ifndef _MasDouble
#define _MasDouble

#include "array.h"

namespace arrays 
{
	class mas_double : public array
	{
		int** mas2;
		//int year;

	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ofst);
		mas_double() {}
	};
}

#endif
