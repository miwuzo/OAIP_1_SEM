#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double b, z, x = -0.004, s = 1.1, j = 4;
	while (j <= 7)
	{
		
		b = 12 * s - exp(-s / 2) * (x - j);
		if (b < 1.5)
		{
			z = sqrt(-2 * x * j) + b;
		}
		else
		{
			z = abs(13 * x * j) + b;
		}
		cout << "b = " << b << endl;
		cout << "z = " << z << endl;
		cout << " " << endl;
		j += 0.5;
	}
	return (0);
}