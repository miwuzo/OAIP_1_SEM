#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n = 200, i = 1;
	double h, x, s1 = 0, s2 = 0, z, a = 2, b = 7;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (i; i < n; i++)
	{
		s2 += pow(sin(x), 2) + 1;
		x += h;
		s1 += pow(sin(x), 2) + 1;
		x += h;
	}
	z = (h / 3) * (pow(sin(a), 2) + 1 + 4 * (pow(sin(a + h), 2) + 1) + 4 * s1 + 2 * s2 + pow(sin(b), 2) + 1);
	cout << z << endl;
}
