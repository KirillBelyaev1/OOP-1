#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include "windows.h"

using namespace std;
using namespace arrays;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in(argv[1]);
	ofstream out(argv[2]);

	container container;
	container.In(in);
	out << "Filled container. " << endl << endl;
	
	int enter = 0;

	do 
	{
		cout << "Сортировка:\n1 - по возрастанию\n2 - по убыванию\n" << endl;
		cin >> enter;
		if (enter != 1 && enter != 2) 
			cout << "Ошибка! Повторите ввод!" << endl;

	} while (enter != 1 && enter != 2);

	out << "Сортированный контейнер: " << endl << endl;

	if (enter == 1) 
		container.SortSum(true);
	if (enter == 2)
		container.SortSum(false);	
	
	container.Out(out);
	
	out << "Empty container. " << endl << endl;
	container.Clear();
	container.Out(out);

	//cout << "Stop" << endl;

	in.close();
	out.close();

	return 0;
}

