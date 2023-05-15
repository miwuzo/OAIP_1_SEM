#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double n;
	cout << "Введите номер квартиры - ";
	cin >> n;
	if (n <= 36 and n > 0)
	{
		double Квартира = n, Этаж = ceil(n / 4);
		double Подъезд = ceil(n / 36);
		cout << "Квартира - " << Квартира << "\nЭтаж - " << Этаж << "\nПодъезд - " << Подъезд << endl;
	}
	if (n <= 72 and n > 36)
	{
		double Квартира = n, Этаж = ceil(n / 4) - 9;
		double Подъезд = ceil(n / 36);
		cout << "Квартира - " << Квартира << "\nЭтаж - " << Этаж << "\nПодъезд - " << Подъезд << endl;
	}
	if (n <= 108  and n > 72)
	{
		double Квартира = n, Этаж = ceil(n / 4) - 18;
		double Подъезд = ceil(n / 36);
		cout << "Квартира - " << Квартира << "\nЭтаж - " << Этаж << "\nПодъезд - " << Подъезд << endl;
	}
	if (n <= 144 and n > 108)
	{
		double Квартира = n, Этаж = ceil(n / 4) - 27;
		double Подъезд = ceil(n / 36);
		cout << "Квартира - " << Квартира << "\nЭтаж - " << Этаж << "\nПодъезд - " << Подъезд << endl;
	}
	return(0);

}
