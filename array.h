#include "stdafx.h"
#ifndef _array
#define _array
#include <fstream>

using namespace std;

namespace arrays 
{	
	class array
	{
	public:
		int razmer = 0;
		enum process { ROW, COLUMS, OMAS };
		process p;
		int sum = 0;
		int key = 0;
	public:		
		bool Compare(array *next, bool Sort);
		static  array* InfaArrayPrint(ifstream &ifst);
		static void InfaArrayWrite(array *array, ofstream &ost);
		virtual int CalculationSum() = 0;
		virtual void ReadFile(ifstream &ifst) = 0;
		virtual void WriteFile(ofstream &ost) = 0;	

		array(){};
	};
}

#endif