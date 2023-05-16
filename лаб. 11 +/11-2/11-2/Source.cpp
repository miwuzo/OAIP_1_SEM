#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int A, n, p; char tmp[33];
    cout << "Введите число А ";
    cin >> A;
    cout << endl;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном виде = " << tmp << endl;
    cout << " " << endl;
    cout << "Введите от какого бита начинать замену ";
    cin >> p;
    cout << endl;
    cout << "Скольно заменяем битов? ";
    cin >> n;
    cout << endl;
    unsigned int mask = (1 << p) - 1;
    for (int i = 0; i < n; i++) {
        A ^= mask;
        mask <<= 1;
    }
    _itoa_s(A, tmp, 2);
    cout << "Итоговое число = " << tmp << endl;
}



