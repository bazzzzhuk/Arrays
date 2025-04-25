#include<iostream>
using namespace std;
//#define BYNARY

void main()//шаблон))
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "decimal: "; cin >> decimal;
#ifdef BYNARY
	const int n = 32; //max возможная разрядность двоичного числа
	bool binary[n] = {}; //разряды двоичного числа
	int i= 0;
	for (; decimal; decimal >>= 1)binary[i++] = decimal &1;
	
	for (--i; i >= 0; i--)cout << binary[i];
	cout << endl;
#endif
	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i] = decimal % 16;
		hex[i++] += hex[i] < 10 ? 48 : 55;
	}
	for (--i; i >= 0; i--)
	{
		cout << hex[i];
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	}
	
	cout << endl;
}