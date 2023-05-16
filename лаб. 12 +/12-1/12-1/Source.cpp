#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	srand(time(NULL));
	int n, rmx = 100, rmn = -100;
	const int sz = 1000;
	int A[sz] = {};
	cout << "Размер массива: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		*(A + (i)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << "A[" << i << "]" << "\t" << A[i] << endl;
	}
	cout << " " << endl;
	cout << "Массив после изменения: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (*(A + (i)) > 0)
		{
			cout << *(A + (i)) << endl;
		}
	}
	for (int j = 0; j < n; j++)
	{
		if (*(A + (j)) < 0)
		{
			cout << *(A + (j)) << endl;
		}
	}
}