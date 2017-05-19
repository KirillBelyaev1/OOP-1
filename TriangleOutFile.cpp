#include "stdafx.h"
#include "triangle.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void masTriangle::WriteFile(ofstream &ost)
	{
		string pro[3] = { "���������", "�� ��������", "���������� ������" };
		CheckOutputFile(ost);
		ost << pro[p].c_str() << "\n";
		ost << "��� ����������� �������: ����������� = " << razmer << endl;
		ost << "������� : " << endl;

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				if (i >= j)
				{
					ost << mas3[i][j] << "\t";
				}
				else
				{
					ost << "\t";
				}
			}
				ost << "\n";	
		}
		ost << "����� ��������� = " << CalculationSum() << endl;
		ost << endl;
	}
}