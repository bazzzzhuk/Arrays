#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr_unique[n];
	int x;
	int maxRand = 80, minRand = 70;
	bool unique = false;
	for (int i = 0; i < n; i++) 
	{
		do 
		{
			unique = false;
			x = rand() % (maxRand - minRand) + minRand;
			for(int ii=0;ii<i;ii++)if(x==arr_unique[ii]) unique=1;
		} while (unique);
		arr_unique[i] = x;
	}
	for (int i = 0; i < n; i++)cout << arr_unique[i] << " ";
}