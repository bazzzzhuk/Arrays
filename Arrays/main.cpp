#include<iostream>
using namespace std;
#define ARRAYS

void main()//Это занятие №1 по массивам
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS
	int minRand, maxRand;
	do
	{
		cout << "min: "; cin >> minRand;
		cout << "max: "; cin >> maxRand; if (minRand == maxRand)cout << "Диапазона нет..." << endl;
	} while (minRand==maxRand);
	const int n = 50;
	int arr[n] = { 3,5,8 };
	//arr[1] = 1024;
	//cout << arr[1] << endl;
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)arr[i] = rand() % (maxRand-minRand) + minRand;
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)cout << endl;
		cout << arr[i] << "\t";
	}
	cout << endl<<endl;

	for (int i = 0; i < n - 1; i++)
	{
		for (int ii = i + 1; ii < n; ii++)
		{
			if (arr[i] > arr[ii])
			{
				int buf = arr[ii];
				arr[ii] = arr[i];
				arr[i] = buf;
				
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)cout << endl;
		cout << arr[i] << "\t";
	}
	

#endif
	

}
