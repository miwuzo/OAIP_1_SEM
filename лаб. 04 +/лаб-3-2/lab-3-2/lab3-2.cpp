#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double n;
	cout << "������� ����� �������� - ";
	cin >> n;
	if (n <= 36 and n > 0)
	{
		double �������� = n, ���� = ceil(n / 4);
		double ������� = ceil(n / 36);
		cout << "�������� - " << �������� << "\n���� - " << ���� << "\n������� - " << ������� << endl;
	}
	if (n <= 72 and n > 36)
	{
		double �������� = n, ���� = ceil(n / 4) - 9;
		double ������� = ceil(n / 36);
		cout << "�������� - " << �������� << "\n���� - " << ���� << "\n������� - " << ������� << endl;
	}
	if (n <= 108  and n > 72)
	{
		double �������� = n, ���� = ceil(n / 4) - 18;
		double ������� = ceil(n / 36);
		cout << "�������� - " << �������� << "\n���� - " << ���� << "\n������� - " << ������� << endl;
	}
	if (n <= 144 and n > 108)
	{
		double �������� = n, ���� = ceil(n / 4) - 27;
		double ������� = ceil(n / 36);
		cout << "�������� - " << �������� << "\n���� - " << ���� << "\n������� - " << ������� << endl;
	}
	return(0);

}
