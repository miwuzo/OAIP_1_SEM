#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int q, b;
	cout << "������� q: "; cin >> q;
	cout << "������� b: "; cin >> b;
	for (int i = 1; i < q; i++)
	{
		int ����� = i;
		int ����� = 0;
		while (����� != 0)
		{
			����� += ����� % 10;
			����� /= 10;
		}
		if (����� * ����� == b)
		{
			cout << "����� = " << i << endl;
		}

	}return (0);

}