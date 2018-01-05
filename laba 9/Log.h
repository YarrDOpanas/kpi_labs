// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LOG_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LOG_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LOG_EXPORTS
#define LOG_API __declspec(dllexport)
#else
#define LOG_API __declspec(dllimport)
#endif

#include <iostream>
#include<random>
#include<iomanip>

class matrix;
EXTERN_C LOG_API  matrix* GetPointer();

class  matrix
{
	int**matr;
	int n, m;
public:
	matrix(matrix& obj);
	matrix();
	virtual int without_minus();
	virtual void output_first();
	virtual void set_matrix();
	virtual void random_set_matrix();
	virtual int get_n();
	virtual int get_m();
	virtual bool check(char*str);
};