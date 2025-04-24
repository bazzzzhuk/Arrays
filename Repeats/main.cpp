#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int arr_sum[n / 2] = {};
	int arr_min = 0; int arr_max = 5;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (arr_max - arr_min) + arr_min;
		arr_sum[arr[i]]++;
	}
	cout << "Массив состоит из: ";
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (int i = 0; i < n /2 ; i++) cout << "В нём цифр \"" << i<< "\" -> " << arr_sum[i]<<" шт."<<endl;
}