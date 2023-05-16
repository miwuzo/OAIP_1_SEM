#include<iostream>
void main()
{
	using namespace std;
	int i;
	double x[6] = { 5, 4, 3, 2, 6, 1 }, q, a, b, z = 0, sum = 0;
	for (i = 0; i < 5; i++)
	{
		if (z < x[i])
		{
			z = x[i];
		}
		a = z;
	}
	for (i = 0; i < 5; i++)
	{
		b = a/(x[i] + 1);
		sum += b;
	}
	q = sum;
	cout << "q = " << q << endl;
}