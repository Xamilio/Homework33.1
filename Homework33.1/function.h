#pragma once
#include <utility>
using namespace std;

int* FillRandomInt(int size)
{
	int* mas = new int[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 100;
	}
	return mas;
}
void PrintMasInt(int* mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << "\n";
}
int MinInt(int* mas, int size)
{
	int x = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (x > mas[i])
		{
			x = mas[i];
		}
	}
	return x;
}
int MaxInt(int* mas, int size)
{
	int x = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (x < mas[i])
		{
			x = mas[i];
		}
	}
	return x;
}
int* SortInt(int* mas, int size)
{
	int buff = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				buff = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = buff;
			}
		}
	}
	return mas;
}
int* EditInt(int size)
{
	int* mas = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "\n¬ведите значение " << i << " " << " элемента: ";
		cin >> mas[i];
	}
	return mas;
}



char* FillRandomChar(int size)
{
	char* mas = new char[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = 48 + rand() % 32;
	}
	return mas;
}
void PrintMasChar(char* mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << "\n";
}
int MinChar(char* mas, int size)
{
	char x = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (x > mas[i])
		{
			x = mas[i];
		}
	}
	return x;
}
int MaxChar(char* mas, int size)
{
	char x = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (x < mas[i])
		{
			x = mas[i];
		}
	}
	return x;
}
char* SortChar(char* mas, int size)
{
	char buff = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				buff = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = buff;
			}
		}
	}
	return mas;
}
char* EditChar(int size)
{
	char* mas = new char[size];
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "¬ведите значение " << i << " элемента: ";
		cin >> mas[i];
	}
	return mas;
}


double* FillRandomDouble(int size)
{
	double* mas = new double[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = (rand() % 100) * 1.0 / 3;
	}
	return mas;
}
void PrintMasDouble(double* mas, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << "\n";
}
double MinDouble(double* mas, int size)
{
	double x = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (x > mas[i])
		{
			x = mas[i];
		}
	}
	return x;
}
double MaxDouble(double* mas, int size)
{
	double x = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (x < mas[i])
		{
			x = mas[i];
		}
	}
	return x;
}
double* SortDouble(double* mas, int size)
{
	double buff = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (mas[j] > mas[j + 1])
			{
				buff = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = buff;
			}
		}
	}
	return mas;
}
double* EditDouble(int size)
{
	double* mas = new double[size];
	for (int i = 0; i < size; i++)
	{
		cout << "¬ведите значение " << i << " " << " элемента: ";
		cin >> mas[i];
	}
	return mas;
}

#ifdef INTEGER
#define FillRandom FillRandomInt
#define Min MinInt
#define PrintMas PrintMasInt
#define Max MaxInt
#define Sort SortInt
#define Edit EditInt
#elif defined(CHAR1) // ќбычный CHAR воспринимаетс€ как тип
#define FillRandom FillRandomChar
#define Min MinChar
#define PrintMas PrintMasChar
#define Max MaxChar
#define Sort SortChar
#define Edit EditChar
#elif defined(DOUBLE1) // ќбычный DOUBLE воспринимаетс€ как тип
#define FillRandom FillRandomDouble
#define Min MinDouble
#define PrintMas PrintMasDouble
#define Max MaxDouble
#define Sort SortDouble
#define Edit EditDouble
#endif