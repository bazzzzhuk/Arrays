#include<iostream>
using namespace std;
#define SHIFT //�������� ������� 
#define VYVOD for (int i = 0; i < 10; ++i) cout << arr[i] << " ";cout << endl;

void main()//������� ������ ������� ������ � ���������/����������� ������ ���������...���������� ��-�� ����������� ������.
{
	setlocale(LC_ALL, "");
#ifdef SHIFT
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << "������ �� ����: ";
	for (int i = 0; i < 10; i++)cout << arr[i] << ",";
	int n; cout << " �������� ����� �� ������� : "; cin >> n;
	for (int left = 0; left < n; left++)
	{
		for (int lleft = 0; lleft < 9; lleft++) arr[lleft] ^= arr[lleft + 1] ^= arr[lleft] ^= arr[lleft + 1];
		VYVOD
	}
	cout << "� ������ �� ������� ������: "; cin >> n;
	for (int right = n; right > 0; right--)
	{
		for (int rright = 9; rright > 0; rright--) arr[rright] ^= arr[rright - 1] ^= arr[rright] ^= arr[rright - 1];
		VYVOD
	}
#endif
}
