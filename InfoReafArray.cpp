#include "stdafx.h"
#include "array.h"

#include "MasOne.h"
#include "MasDouble.h"

using namespace std;

namespace arrays 
{	
	array* array::InfaArrayPrint(ifstream &ifst) 
	{
		array *readarray;
		int key;
		char charkey[10];
		char one[] = "one";
		char doubl[] = "doubl";
		int razmer;

		ifst >> charkey;
		ifst >> razmer;
		for (int i = 0; i < strlen(charkey); ++i)
			charkey[i] = tolower(charkey[i]);

		if (strstr(charkey, one) || strstr(charkey, "1"))
		{
			key = 1;
		}


		if (strstr(charkey, doubl) || strstr(charkey, "2"))
		{
			key = 2;
		}
		
		switch (key) 
		{
		case 1:
			readarray = new mas_one;
			break;
		case 2:
			readarray = new mas_double;
			break;
		default:
			return NULL;
			break;
		}

		readarray->key = key;
		readarray->razmer = razmer;

		readarray->ReadFile(ifst);

		return readarray;
	}
}