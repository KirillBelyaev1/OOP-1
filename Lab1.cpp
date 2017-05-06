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

	//out << "Файл содержит " << endl << endl;
	//list.Out(out);
	//out << endl << endl;

	string enter;

	cout << "Вывод:\n 1 - Только одномерный массив\n 2 - Только двумерный массив\n 0 - Все элементы" << endl;
	cin >> enter;
	if (enter == "1")
		cout << "Вы выбрали только одномерный массив" << endl << endl;
	if (enter == "2")
		cout << "Вы выбрали только двумерный массив \n";

	list.Out1(out, enter);

	out << endl << endl;

	list.Clear();
	list.Out(out);

	cout << "Stop" << endl;

	in.close();
	out.close();

	return 0;
}

