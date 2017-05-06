#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"

using namespace std;
using namespace arrays;

int main(int argc, char* argv[])
{

	/*ifstream in;
	in.open("in.txt");

	ofstream out;
	out.open("out.txt");*/

	if (argc != 3) {
		cout << "Incorrect command line! " << "Waited: command in_file out_file" << endl;
		exit(1);
	}
	ifstream in(argv[1]);
	ofstream out(argv[2]);


	cout << "Start" << endl;

	container container;
	container.In(in);
	out << "Filled container. " << endl << endl;
	container.Out(out);
	container.Clear();
	out << "Empty container. " << endl << endl;
	container.Out(out);

	cout << "Stop" << endl;

	in.close();
	out.close();

	return 0;
}

