#include<iostream>
using namespace std;
#include<Windows.h>
#define TAB " "

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < n; i++)cout << arr[i] << TAB;
	cout << endl;
	int number_of_shifts;
	cout << "¬ведите сдвиг влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++) arr[i - 1] = arr[i];
		Sleep(100);
		system("cls");
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)cout << arr[i] << TAB;
	}
	cout <<endl<< "¬ведите сдвиг вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)arr[i] = arr[i-1];
		Sleep(100);
		system("cls");
		arr[0] = buffer;
		for (int i = 0; i < n; i++)cout << arr[i] << TAB;
	cout << endl;
	}
}