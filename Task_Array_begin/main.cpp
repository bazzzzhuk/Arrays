#include<iostream>
using namespace std;
void main()//������ ������� �� ��������
{
	setlocale(LC_ALL, "");
	//int n; cout << "������� ������ �������: "; cin >> n;
	const int n = 5;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cout << "������� ����� � ������ ����� " << i + 1 << "/5: ";
		int arr_num; cin >> arr_num;
		arr[i] = arr_num;
	}
	cout << endl;
	for (int i = 0; i < n; i++)cout << arr[i] << " ";//���������
	cout << endl;
	for (int i = n - 1; i >= 0; i--)cout << arr[i] << " ";//� �������� �������
	cout << endl;
	int sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];//�����
	cout << sum;
	cout << endl;
	cout << (double)sum / n;//��������������������
	cout << endl;
	int arr_min=0, arr_max = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)arr_min = arr_max = arr[i];//��������� ����� ������������� ����/���
		if (arr[i] > arr_max)arr_max = arr[i];
		if (arr[i] < arr_min)arr_min = arr[i];
	}
	cout << arr_max << endl;
	cout << arr_min << endl;
	cout << endl;
}
