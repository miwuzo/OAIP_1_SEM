#include<iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float r, p, q, R;
	cout << "Введите радиус шара";
	cin >> r;
	cout << "Введите диагонали ромба";
	cin >> p >> q;
	R = (p * q) / (sqrt(pow(p / 2, 2) + pow(q / 2, 2)) * 2);
	if (r <= R) {
		cout << "Может";
	}
	else {
		cout << "Не может";
	}
}