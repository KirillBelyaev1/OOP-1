#include "stdafx.h"
#include "MasOne.h"
#include <fstream>
#include "string"
#include "def.h"
using namespace std;

namespace arrays
{
	void mas_one::WriteFile(ofstream &ofst)
	{
		string pro[3] = { "Построчно", "По столбцам", "Одномерный массив" };
		CheckOutputFile(ofst);
		ofst << pro[p].c_str() << "\n";
		//ofst << name << "\n";
		ofst << "It is One Matrix: razmernost = " << razmer << endl;
		ofst << "Matrix" << endl;
		ofst << "Сумма элементов = " << CalculationSum() << endl;

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
