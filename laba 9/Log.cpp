#include "stdafx.h"
#include "Log.h"

matrix* GetPointer()
{
	return new matrix;
}

matrix::matrix()
{
	matr = NULL;
	n = 0;
	m = 0;
}

matrix::matrix(matrix&obj)
{
	for (int i = 0; i < n; i++)
		delete[]matr;
	delete[]matr;
	n = obj.get_n();
	m = obj.get_m();
	matr = new int*[n];
	for (int i = 0; i < n; i++)
		matr[i] = new int[m];
}

int matrix::without_minus()
{
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (matr[i][j] < 0)
			{
				matr[i][j] = 0;
				count++;
			}
	return count;
}
void matrix::output_first()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << std::setw(4)<<matr[i][j] << " ";
		std::cout << std::endl;
	}
}
void matrix::set_matrix()
{
	char*buff = new char[100];
	while (true)
	{
		std::cout << "Enter countity of strings: ";
		std::cin >> buff;
		for (int i = 0; i<strlen(buff); i++)
			if (isdigit(buff[i]) == false)
			{
				std::cout << "It is not a natural number" << std::endl;
				continue;
			}
		break;
	}
	n = atoi(buff);
	while (true)
	{
		std::cout << "Enter countity of columns: ";
		std::cin >> buff;
		for (int i = 0; i<strlen(buff); i++)
			if (isdigit(buff[i]) == false)
			{
				std::cout << "It is not a natural number" << std::endl;
				continue;
			}
		break;
	}
	m = atoi(buff);
	matr = new int*[n];
	for (int i = 0; i < n; i++)
		matr[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			while (true)
			{
				std::cout << "Enter[" << i << "][" << j << "] element" << std::endl;
				std::cin >> buff;
				if (check(buff) == true)
				{
					matr[i][j] = atof(buff);
					break;
				}
				else
					std::cout << "It is not a number, try again" << std::endl;
			}
		}
}
void matrix::random_set_matrix()
{
	std::random_device ran;
	n = ran.operator()() % 8 + 3;
	m = ran.operator()() % 8 + 3;
	matr = new int*[n];
	for (int i = 0; i < n; i++)
		matr[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			matr[i][j] = ran.operator()() % 101 - 50;
}
int matrix::get_n()
{
	return n;
}
int matrix::get_m()
{
	return m;
}
bool matrix::check(char*str)
{
	int len = strlen(str);
	bool dot = false;
	if (str[0] != '-'&&isdigit(str[0]) == false)
		return false;
	for (int i = 1; i < len; i++)
	{
		if (isdigit(str[i]) == false)
		{
			if (str[i] == '.'&&dot == false)
				dot = true;
			else
				return false;
		}
	}
	return true;
}


