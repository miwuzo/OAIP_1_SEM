#include <iostream>

using namespace std;
int main()
{
    int a[100], b[100], i, sz, n;
	cout << "razmer massiva =";
	cin >> sz;
	cout << "chislo sdviga =";
	cin >> n;
	for (i = 0; i < sz; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	for (i = 0; i < sz; i++)
	{

	
		b[i] = a[(i + n) % sz];

		cout << "b[" << i << "]=" << b[i] << endl;
	}
	return 0;
}