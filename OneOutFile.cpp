#include "stdafx.h"
#include "MasOne.h"

using namespace std;

namespace arrays 
{	
	void mas_one::WriteFile(ofstream &ofst) 
	{
		ofst << "It is One Matrix: razmernost = " << razmer << endl;
		ofst << "Matrix" << endl;
		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				if (i == j)
					ofst << mas1[i] << "\t";
				else
					ofst << "0\t";
			}
			ofst << "\n";
		}
		ofst << endl;
	}
	
} 
