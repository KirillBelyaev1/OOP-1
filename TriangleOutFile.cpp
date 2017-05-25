#include "stdafx.h"
#include "triangle.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void masTriangle::WriteFile(ofstream &ofst)
	{
		string pro[3] = { "Построчно", "По столбцам", "Одномерный массив" };
		CheckOutputFile(ofst);
		ofst << pro[p].c_str() << "\n";
		ofst << "It is Triangle Matrix: razmernost = " << razmer << endl;
		ofst << "Matrix : " << endl;
		ofst << "Сумма элементов = " << CalculationSum() << endl;

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