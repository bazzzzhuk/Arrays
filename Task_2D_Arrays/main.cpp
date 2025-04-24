#include<iostream>
using namespace std;
#define LINE for (int i = 0; i < 26; i++)cout << "-"; cout <<endl;

void main()
{
	setlocale(LC_ALL, "");
	//
	LINE
		cout << "\t2D Arrays" << endl;
	LINE
		int sum = 0;
	const int ROWS = 5;
	const int COLS = 4;
	int arr_sum[10] = {};

	int arr[ROWS][COLS] = {};
	int arr_min, arr_max;
	arr_min = arr_max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int ii = 0; ii < COLS; ii++)
		{
			arr[i][ii] = rand() % 10;// UNIQUE 2, но до 10
			arr_sum[arr[i][ii]]++; // Подсчёт одинаковых цифр
			sum += arr[i][ii];// Сумма
			cout << arr[i][ii] << "\t"; //вывод
			if (arr[i][ii] > arr_max)arr_max = arr[i][ii]; //максимальное число
			if (arr[i][ii] < arr_min)arr_min = arr[i][ii]; // минимальное число
		}
		cout << endl;
	}
	LINE
		for (int i = 0; i < 10; i++) cout << " В нём цифр \"" << i << "\" --> " << arr_sum[i] << " шт." << endl;
	LINE
		cout << "Сумма чисел массива: " << sum << endl;
	LINE
		cout << "Средне-арифметическое \n\t  цифр масcива: " << sum / (ROWS * COLS) << endl;
	LINE
		cout << "min " << arr_min << endl;
	cout << "max " << arr_max << endl;
	LINE


		int x;
	int maxRand = 90, minRand = 70;
	bool unique = false;

	cout << "UNIQUE_range " << minRand << " -- " << maxRand << endl; LINE //Уникальный массив 70 - 90
		for (int i = 0; i < ROWS; i++)
		{

			for (int ii = 0; ii < COLS; ii++)
			{
				do
				{
					unique = false;
					x = rand() % (maxRand - minRand) + minRand;
					for (int j = 0; j < i + 1; j++)
					{
						for (int jj = 0; jj < COLS; jj++)
						{
							if (x == arr[j][jj]) unique = 1;
						}
					}
				} while (unique);
				arr[i][ii] = x;
			}
		}
	for (int i = 0; i < ROWS; i++)
	{
		for (int ii = 0; ii < COLS; ii++) cout << arr[i][ii] << "\t"; //вывод
		cout << endl;
	}
	LINE
		int ir = 0, iir = 0, ic = 0, iic = 0;
	for (ir = 0; ir < ROWS; ir++)
	{

		for (ic = 0; ic < COLS - 1; ic++)
		{
			for (iir = ir + 1; iir < ROWS; iir++)
			{
				if (ir<ROWS - 1 && arr[ir][COLS - 1]>arr[iir][0])
				{
					int buf = arr[iir][0];
					arr[iir][0] = arr[ir][COLS - 1];
					arr[ir][COLS - 1] = buf;
				}
				for (iic = ic + 1; iic < COLS - 1; iic++)
				{

					if (arr[ir][ic] > arr[iir][iic])
					{
						int buf = arr[iir][iic];
						arr[iir][iic] = arr[ir][ic];
						arr[ir][ic] = buf;
					}
				}
			}
		}



	}
	LINE
		for (int i = 0; i < ROWS; i++)
		{
			for (int ii = 0; ii < COLS; ii++) cout << arr[i][ii] << "\t"; //вывод
			cout << endl;
		}

}