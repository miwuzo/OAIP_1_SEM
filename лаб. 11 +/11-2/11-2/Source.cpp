#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int A, n, p; char tmp[33];
    cout << "������� ����� � ";
    cin >> A;
    cout << endl;
    _itoa_s(A, tmp, 2);
    cout << "����� � �������� ���� = " << tmp << endl;
    cout << " " << endl;
    cout << "������� �� ������ ���� �������� ������ ";
    cin >> p;
    cout << endl;
    cout << "������� �������� �����? ";
    cin >> n;
    cout << endl;
    unsigned int mask = (1 << p) - 1;
    for (int i = 0; i < n; i++) {
        A ^= mask;
        mask <<= 1;
    }
    _itoa_s(A, tmp, 2);
    cout << "�������� ����� = " << tmp << endl;
}



