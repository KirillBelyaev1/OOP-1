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
		int razmer=0;
		int key = 0;
	public:		
		static  array* InfaArrayPrint(ifstream &ifst);
		static void InfaArrayWrite(array *array, ofstream &ofst);

		virtual void ReadFile(ifstream &ifst) = 0;
		virtual void WriteFile(ofstream &ofst) = 0;	
	};
}

#endif