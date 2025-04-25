#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "2D Arrays" << endl;
	const int ROWS = 5;
	const int COLS = 4;
	int arr[ROWS][COLS] = 
	{
		/*{1,2,3},{4,5,6},{7,8,9}*/
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j]=rand()%100;
		}
		
	}


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < ROWS; i++) 
	{
		for(int j=0;j<COLS;j++)
		{
			for(int k=i;k<ROWS;k++)
			{
				for (int l = k ==i? j+1:0; l < COLS;l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buf = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buf;
					}
				}
			}
		}
	}


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}