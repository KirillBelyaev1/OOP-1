#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include <string>
#include "windows.h"

using namespace std;
using namespace arrays;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in(argv[1]);
	ofstream out(argv[2]);

	list list;
	list.In(in);

	int enter1 = 0;

	do
	{
		cout << "����������:\n1 - �� �����������\n2 - �� ��������\n" << endl;
		cin >> enter1;
		if (enter1 != 1 && enter1 != 2)
		{
			cout << "������! ��������� ����!" << endl;
		}

	} while (enter1 != 1 && enter1 != 2);

	out << "������������� ���������: " << endl << endl;

	if (enter1 == 1)
	{
		list.SortSum(true);
	}
	if (enter1 == 2)
	{
		list.SortSum(false);
	}

	list.Out(out);

	string enter;

	cout << "�����:\n 1 - ������ ���������� ������\n 2 - ������ ��������� ������\n 3 - ������ �����������\n 0 - ��� ��������" << endl;
	cin >> enter;
	if (enter == "1")
	{
		cout << "�� ������� ������ ���������� ������" << endl << endl;
	}
	if (enter == "2")
	{
		cout << "�� ������� ������ ��������� ������" << endl << endl;
	}
	if (enter == "3")
	{
		cout << "�� ������� ������ ����������� ������� \n";
	}

	list.Out1(out, enter);

	out << endl << endl;

	list.Clear();
	list.Out(out);
	
	cout << "��������� �����������" << endl;

	in.close();
	out.close();

	return 0;
}

