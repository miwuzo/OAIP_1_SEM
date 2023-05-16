#include <iostream>
void main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 10;
	int F[n], D[n], sum, a = 0, i, size;

	cout << "Массив F: " << endl;
	for (i = 0; i < n; i++)
	{
		*(F + i) = rand() % 100;
		cout << " " << F[i];
	}
	cout << endl;
	cout << "Массив D: " << endl;
	for (i = 0; i < n; i++)
	{
		*(D + i) = rand() % 100;
		cout << " " << D[i];
	}

	int max = -99;
	for (i = 0; i < n; i++)
	{
		if (F[i] > max) 
		{
			max = F[i];
		}
	}
	cout << endl;
	cout << "Max = " << max << std::endl;
	for (i = 0; i < n; i++)
	{
		if (D[i] == max)
		{
			a = 1;
		}
	}
	if (a == 1)
	{
		cout << "есть";
	}
	if (a == 0)
	{
		cout << "нет";
	}
}