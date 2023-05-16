#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int N, i, j, **mass;
	srand((unsigned)time(NULL));
	int rmn = -3, rmx = 5;
	srand(time(NULL));
	mass = new int* [N];

	cout << "Матрица: " << endl;
	for (int i = 0; i < N; i++)
		mass[i] = new int[N];
	for (int j = 0; j < N; j++)
		mass[i][j] = 1 + rand() % 10;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << mass[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
	int len = 0;
	for (int i = 0; i < N; i++)
	{
		int k = 0;
		for (int j = 0; j < N; j++) 
			if (mass[i][j] == 0)  
				k++;  
		if (k > 0)      
			len++;    
	}
	if (len > 0)
	{
		cout << "Кол-во строк с 0-элементом: " << len << endl;
	}
	if (len < 3) {
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				if (mass[i][j] < 0)
				{
					mass[i][j] = 0;
				}
				cout << mass[i][j] << "\t";
			}
			cout << "\n";
		}
	}
	for (int k = 0; k < N; k++)
		delete[] mass[k];
	delete[] mass;

}