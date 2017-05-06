#include "stdafx.h"
#include "triangle.h"

using namespace std;

namespace arrays
{
	void mas_triangle::WriteFile(ofstream &ofst)
	{
		ofst << "It is Triangle Matrix: razmernost = " << razmer << endl;
		ofst << "Matrix : " << endl;
		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				if (i >= j)
				{
					ofst << mas3[i][j] << "\t";
				}
				else
				{
					ofst << "\t";
				}
			}

				ofst << "\n";
				
		}
			ofst << endl;


	}
}