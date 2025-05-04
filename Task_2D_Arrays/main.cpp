#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
#define LINE for (int i = 0; i < 26; i++)cout << "-"; cout <<endl;
#define Escape 27
#define LeftArrow 75
#define RightArrow 77
#define OutPut LINE cout << "\t2D Arrays" << endl; LINE for (int i = 0; i < ROWS; i++){for (int ii = 0; ii < COLS; ii++){cout << arr[i][ii] << "\t";} cout << endl;} LINE cout << " Сдвигаем двумерный массив \n <== влево или вправо ==> \n   с помощью стрелок...\n     Для выхода - ESC" << endl; LINE
#define OutPut_2 for(int i = 0; i < ROWS; i++){for (int ii = 0; ii < COLS; ii++) cout << arr[i][ii] << "\t";cout << endl;}

void main()
{
	setlocale(LC_ALL, "");
	/*LINE
		cout << "\t2D Arrays" << endl;
	LINE*/
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
			arr[i][ii] = rand() % 10;// UNIQUE 2, но до 10 - не стал переделывать, ошибку свою знаю, ниже - как надо))
			arr_sum[arr[i][ii]]++; // Подсчёт одинаковых цифр
			sum += arr[i][ii];// Сумма
			//cout << arr[i][ii] << "\t"; //вывод
			if (arr[i][ii] > arr_max)arr_max = arr[i][ii]; //максимальное число
			if (arr[i][ii] < arr_min)arr_min = arr[i][ii]; // минимальное число
		}
	}
	OutPut
	char key;
	int r = 0; int c = 0; int buf;
	do {
		key = _getch();
		if (key == LeftArrow)
		{
			buf = arr[r][c];
			for (int r = 0; r < ROWS; r++)
			{
				for (int c = 0; c < COLS - 1; c++)
				{
					arr[r][c] = arr[r][c + 1];
				}
				arr[r][COLS - 1] = arr[r + 1][0];
			}
			arr[ROWS - 1][COLS - 1] = buf;
			system("cls");
			OutPut
		}
		else if (key == RightArrow)
		{
			buf = arr[ROWS - 1][COLS - 1];
			for (int r = ROWS - 1; r >= 0; r--)
			{
				for (int c = COLS - 1; c >= 0; c--)
				{
					arr[r][c] = arr[r][c - 1];
				}
				arr[r][0] = arr[r - 1][COLS - 1];
			}
			arr[0][0] = buf;
			system("cls");
			OutPut
		}
	} while (key != Escape);
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
	cout << "  UNIQUE_range " << minRand << " -- " << maxRand << endl; LINE //Уникальный массив 70 - 90
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
	OutPut_2
	LINE
		cout << "  Сортировка Уникальных" << endl;
	for (int ir = 0; ir < ROWS; ir++)
	{
		for (int ic = 0; ic < COLS; ic++)
		{
			for (int iir = ir; iir < ROWS; iir++)
			{
				for (int iic = iir > ir ? 0 : ic + 1; iic < COLS; iic++)
				{
					if (arr[iir][iic] < arr[ir][ic])
					{
						int buf = arr[ir][ic];
						arr[ir][ic] = arr[iir][iic];
						arr[iir][iic] = buf;
					}
				}
			}
		}
	}
	LINE
		OutPut_2
	LINE
	cout << "     Массив REPEATS 2" << endl;
	LINE
		const int n = 10;
	int arr_count[2][n] = {};
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++) arr[r][c] = rand() % 10;
	}
	OutPut_2
	LINE
		int i = 0;
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			bool check = false;
			for (int j = 0; j < 10; j++)
			{
				if (arr[r][c] == arr_count[0][j])
				{
					arr_count[1][j]++;
					check = true;
					if (i == 0)i++;
					break;
				}
			}
			if (!check)
			{
				arr_count[0][i] = arr[r][c]; arr_count[1][i]++;
				i++;
			}
		}
	}
	for (int ii = 0; ii < i; ii++) { cout << " Чисел \"" << arr_count[0][ii] << "\" в массиве " << arr_count[1][ii] << " шт." << endl; }
	LINE
		cout << "  Сортировка REPEATS 2" << endl;
	LINE
		for (int r = 0; r < i - 1; r++)
		{
			for (int rr = r + 1; rr < i; rr++)
			{
				if (arr_count[0][r] > arr_count[0][rr])
				{
					int buf = arr_count[0][rr];
					int buf2 = arr_count[1][rr];
					arr_count[0][rr] = arr_count[0][r];
					arr_count[1][rr] = arr_count[1][r];
					arr_count[0][r] = buf;
					arr_count[1][r] = buf2;
				}
			}
		}
	for (int ii = 0; ii < i; ii++) { cout << " Чисел \"" << arr_count[0][ii] << "\" в массиве " << arr_count[1][ii] << " шт." << endl; }
	LINE
}