#include<iostream>
using namespace std;
#define ARRAYS

void main()//��� ������� �1 �� ��������
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS
	const int n = 5;
	int arr[n] = { 3,5,8 };
	arr[1] = 1024;
	cout << arr[1] << endl;
	for (int i = 0; i < n; i++)arr[i] = rand() % (100-50) + 50;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
#endif
	

}
