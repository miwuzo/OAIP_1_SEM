#include<iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float r, p, q, R;
	cout << "������� ������ ����";
	cin >> r;
	cout << "������� ��������� �����";
	cin >> p >> q;
	R = (p * q) / (sqrt(pow(p / 2, 2) + pow(q / 2, 2)) * 2);
	if (r <= R) {
		cout << "�����";
	}
	else {
		cout << "�� �����";
	}
}