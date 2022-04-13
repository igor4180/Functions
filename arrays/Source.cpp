#include<iostream>
using namespace std;


#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"







void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Среднее арифметическое элементов массива:" << Avg(arr, n) << endl;
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Минимальное значение элементов массива:" << minValueIn(arr, n) << endl;
	cout << "Максимальное значение элементов массива:" << maxValueIn(arr, n) << endl;

	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Среднее арифметическое элементов массива:" << Avg(brr, n) << endl;
	cout << "Сумма элементов массива:" << Sum(brr, m) << endl;
	cout << "Минимальное значение элементов массива:" << minValueIn(brr, m) << endl;
	cout << "Максимальное значение элементов массива:" << maxValueIn(brr, m) << endl;

	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	
}








