#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	const int N = 100;
	int i, sz, A[N];
	int rmn = -60, rmx = 99;
	int k = 3;
	cout << "������� ������ ������� ";
	cin >> sz;
	cout << "������ �:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
	}
	for (int i = 0; i < sz; i++)
	{
		cout << "A[" << i << "]" << "\t" << A[i] << endl;
	}
	cout << endl;
	cout << "������� �������� �������,������� ������� ������ 3:" << endl;
	for (i = 0; i < sz; i++)
	{
		if (i % 3 == 0)
		{
			k = 0;
			for (i = 1; i < sz; i++)
			{
				if ((i + k) % 3 == 0)
				{
					k++;
					sz--;
				}
				A[i] = A[i + k];
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		cout << "A[" << i << "]" << "\t" << A[i] << endl;
	}
	cout << endl;
	cout << "��������� ����� �����. ��������� 10:" << endl;
	for (i = 0; i < sz; i++)
	{
		if (A[i] < 0)
		{
			A[i + 1] = 10;
			sz++;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		cout << "A[" << i << "]" << "\t" << A[i] << endl;
	}
	cout << endl;
}