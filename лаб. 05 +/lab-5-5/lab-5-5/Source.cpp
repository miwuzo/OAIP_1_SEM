#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c, d, x = 0;
	std::cout << "������� a ";
	std::cin >> a;
	std::cout << "������� b ";
	std::cin >> b;
	std::cout << "������� c ";
	std::cin >> c;
	std::cout << "������� d ";
	std::cin >> d;
	if (a % 2 == 0)
		x = x + 1;
	if (b % 2 == 0)
		x = x + 1;
	if (c % 2 == 0)
		x = x + 1;
	if (d % 2 == 0)
		x = x + 1;
	if (x >= 1)
		std::cout << "����";
	else
		std::cout << "���";
}