#include <tchar.h>
#include <Windows.h>
#include <iostream>
#include "../Log/Log.h"

using namespace std;

typedef matrix* (*GET_POINTER)();

int _tmain(int argc, _TCHAR* argv[])
{
	HINSTANCE hModule = LoadLibrary(L"Log.dll");
	if (hModule)
	{
		GET_POINTER pGetPointer = (GET_POINTER)GetProcAddress(hModule, "GetPointer");
		matrix* log = pGetPointer();		
		if (log)
		{
			log->random_set_matrix();
			cout << "Our matrix: " << endl;
			log->output_first();
			int num = log->without_minus();
			cout <<"Amount of changes: "<< num << endl;
			cout << "Changed matrix: " << endl;
			log->output_first();
		}
		FreeLibrary(hModule);
	}

	system("pause");

	return 0;
}

