#include "stdafx.h"
#include "MasDouble.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void masDouble::WriteFile(ofstream &ost)
	{
		string pro[3] = { "���������", "�� ��������", "���������� ������" };
		CheckOutputFile(ost);
		ost << pro[p].c_str() << "\n";
		ost << "��� �������� �������: ����������� = " << razmer << endl;
		ost << "������� : " << endl;

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				ost << mas2[i][j] << "\t";
			}
			ost << endl;
		}
		ost << "����� ��������� = " << CalculationSum() << endl;
		ost << endl;
	}
}
