#pragma once
#define DOUBLE1
#include <iostream>
#include <utility>
#include <Windows.h>
#include "function.h"
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 5;

	//PrintMasChar(FillRandomChar(size), size);
	//cout << MinChar(EditChar(size), size);
	//cout << MaxChar(EditChar(size), size);
	//  PrintMasChar(SortChar(FillRandomChar(size), size), size);


	PrintMas(FillRandom(size), size);
	cout << Min(Edit(size), size) << "\n";
	cout << Max(Edit(size), size) << "\n";
	PrintMas(Sort(FillRandom(size), size), size);
}
	