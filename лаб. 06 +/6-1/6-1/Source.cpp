#include <iostream>
void main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float z, w, y = 0.4, t = 500000, j;
	int a = 1;
	for (int n = 1; n <= 5; n++)
	{
		cout << "������� j" << endl;
		cin >> j;
		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / ((7 * a) - z);
		cout << "z = " << z << endl;
		cout << "w = " << w << endl;
		cout << endl;
	}
}