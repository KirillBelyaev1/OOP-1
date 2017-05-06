#include "stdafx.h"
#include "MasDouble.h"

using namespace std;

namespace arrays 
{
	void mas_double::WriteFile(ofstream &ofst) 
	{
		ofst << "It is Double Matrix: razmernost = " << razmer << endl;
		ofst << "Matrix : " << endl;
		ofst << "Сумма элементов = " << CalculationSum() << endl;
		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				ofst << mas2[i][j] << "\t";
			}
			ofst << endl;
		}
	}
}
