#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Конвертация десятичного числа в двоичное." << endl;
	cout << "Введите десятичное число: "; int a; cin >> a;
	int b = a;
	int ost = 0;
	int ii;
	int arr[32] = {};
	for (ii = 0; a >= 1; ii++)
	{
		ost = a % 2;
		a /= 2;
		arr[ii] = ost;
	}
	for (int i = ii - 1; i >= 0; i--)cout << arr[i];
	cout << endl;
	cout << "Конвертация десятичного числа в шестнадцатиричное." << endl;
	int ost_hex = 0;
	int iii;
	int arr_hex[32] = {};
	for (iii = 0; b >= 1; iii++)
	{
		ost = b % 16;
		b /= 16;
		arr_hex[iii] = ost;
	}
	for (int i = iii - 1; i >= 0; i--)
		if (arr_hex[i] >= 0 && arr_hex[i] < 10)cout << arr_hex[i];
		else {
			switch (arr_hex[i])
			{
			case 10: cout << "A"; break;
			case 11: cout << "B"; break;
			case 12: cout << "C"; break;
			case 13: cout << "D"; break;
			case 14: cout << "E"; break;
			case 15: cout << "F"; break;
			}
		}
	cout << endl;
}