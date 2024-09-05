#include <iostream>
#include "countSort1.h"

//Функция печати массива
void arrPrint(int* arr, const int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << "\t";
	};
	std::cout << std::endl;
};


int main()
{
	setlocale(LC_ALL, "Russian");


	int arr[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };

	std::cout << "Массив до сортировки: \n";
	arrPrint(arr, std::size(arr));

	countSort(arr, std::size(arr));

	std::cout << "Массив после сортировки: \n";
	arrPrint(arr, std::size(arr));
}