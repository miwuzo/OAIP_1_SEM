#include <iostream>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float z, w, y = 0.4, t = 500000, j = 1;
	int a = 1;
	while (j <= 2)
	{
		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / ((7 * a) - z);
		cout << "j = " << j << endl;
		cout << "z = " << z << endl;
		cout << "w = " << w << endl;
		cout << " " << endl;
		j = j + 0.2;

	}
}