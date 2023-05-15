#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double p, m = 1, c = 0.3, sum = 0;
	   while (m <= 4)
	{
		p = 2 / m + c;
		cout << "p = " << p << endl;
		cout << " " << endl;
		m += 1;
		c += 0.1;
	}
	   m = 1;
		while (c <= 1)
	{
			p = 2 / m + c;
			cout << "p = " << p << endl;
			cout << " " << endl;
			m += 1;
			c += 0.1;
	}
	return (0);
}