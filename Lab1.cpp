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
		cout << "Сортировка:\n1 - по возрастанию\n2 - по убыванию\n" << endl;
		cin >> enter1;
		if (enter1 != 1 && enter1 != 2)
		{
			cout << "Ошибка! Повторите ввод!" << endl;
		}

	} while (enter1 != 1 && enter1 != 2);

	out << "Сортированный контейнер: " << endl << endl;

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

	cout << "Вывод:\n 1 - Только одномерный массив\n 2 - Только двумерный массив\n 3 - Только треугольную\n 0 - Все элементы" << endl;
	cin >> enter;
	if (enter == "1")
	{
		cout << "Вы выбрали только одномерный массив" << endl << endl;
	}
	if (enter == "2")
	{
		cout << "Вы выбрали только двумерный массив" << endl << endl;
	}
	if (enter == "3")
	{
		cout << "Вы выбрали только треугольную матрицу \n";
	}

	list.Out1(out, enter);

	out << endl << endl;

	list.Clear();
	list.Out(out);
	
	cout << "Программа остановлена" << endl;

	in.close();
	out.close();

	return 0;
}

