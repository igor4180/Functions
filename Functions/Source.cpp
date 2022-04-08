#include<iostream>
using namespace std;

	int Add(int a, int b); //Прототип функции
	//Прототип нужен, чтобы имя функции и ее список 
	//принимаемых параметров были известны на момент вызова
	int Sub(int a, int b); //Прототип состоит только из заголовка функции
	int Mul(int a, int b); //Реализация состоит из заголовка и тела функции
	double Div(int a, int b);
void main()
{
	setlocale(LC_ALL, "");
	int power = 0;
	double a, b;
	cout << "Введите число: " << endl;
	cin >> a;
	cout << "Введите степень: " << endl;
	cin >> b;
	cout << "Ваш ответ = " << pow(a, b) << endl;
	
	/*int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int с = Add(a, b);
	cout << a << " + " << b << " = " << с << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;*/
 }
int Add(int a, int b) //Реализация функции
//Реализует то, что делает функция.
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	return a - b; 
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}