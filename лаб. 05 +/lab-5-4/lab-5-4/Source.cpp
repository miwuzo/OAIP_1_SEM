#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int x, y, z, min1, min2, a, b, c;
	std::cout << "¬ведите x ";
	std::cin >> x;
	std::cout << "¬ведите y ";
	std::cin >> y;
	std::cout << "¬ведите z ";
	std::cin >> z;
	min1 = x + y + z;
	a = x * y * z;
	if (a < min1)
		min1 = a;
	min2 = x;
	if (y < min2)
		min2 = y;
	if (z < min2)
		min2 = z;
	c = min1 * min2;
	std::cout << c;
}