#include <fstream>
#include <iostream>
#include "stdafx.h"
#include "def.h"

using namespace std;

void CheckInputFile(ifstream &ifst)
{
	if (!ifst)
	{
		cerr << "Ошибка: отсутсвует файл считывания!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}
void CheckWrongInput(ifstream &ifst)
{
	if (ifst.fail())
	{
		cout << "Некорректное считывание!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}
void CheckOutputFile(ostream &ost)
{
	if (!ost)
	{
		cerr << "Ошибка: отсутсвует файл записи!" << endl;
		getchar();
		getchar();
		exit(1);
	}
}
void CheckKey(int key)
{
	if (key < 1 || key > 3)
	{
		cout << "Некорректно введен 'key'." << endl;
		getchar();
		getchar();
		exit(1);
	}
}
void CheckRazmer(int razmer)
{
	if (razmer < 1)
	{
		cout << "Некорректно введен размер матрицы." << endl;
		getchar();
		getchar();
		exit(1);
	}
}