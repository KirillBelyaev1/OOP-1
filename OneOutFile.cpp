#include "stdafx.h"
#include "MasOne.h"
#include <fstream>
#include "string"
#include "def.h"
using namespace std;

namespace arrays
{
	void masOne::WriteFile(ofstream &ost)
	{
		string pro[3] = { "Построчно", "По столбцам", "Одномерный массив" };
		CheckOutputFile(ost);
		ost << pro[p].c_str() << "\n";
		ost << "Это Единичная матрица: размерность = " << razmer << endl;
		ost << "Матрица" << endl;
		

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				if (i == j)
				{
					ost << mas1[i] << "\t";
				}
				else
				{
					ost << "0\t";
				}
			}
			ost << "\n";
		}

		ost << "Сумма элементов = " << CalculationSum() << endl;

		ost << endl;
	}
}
