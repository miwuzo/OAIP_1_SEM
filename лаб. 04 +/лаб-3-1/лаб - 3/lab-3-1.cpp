#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    cout << "������� 1\n";
    char c, sp = ' ';
    cout << "��������� ������\n";
    cout << "������� ������ ��� ����������: ";
    cin >> c;
    cout << setw(4) << setfill(sp) << sp << setw(2) << setfill(c) << c << endl;
    cout << setw(3) << setfill(sp) << sp << setw(4) << setfill(c) << c << endl;
    cout << setw(1) << setfill(sp) << sp << setw(8) << setfill(c) << c << endl;
    cout << setw(10) << setfill(c) << c << endl;
    cout << setw(10) << setfill(c) << c << endl;
    cout << setw(10) << setfill(c) << c << endl;
    cout << "��������������� ������\n";
    cout << "������� ������ ��� ����������: ";
    c = _getch();
    putchar(c);
    char house[] = {
        '\n', ' ', ' ', ' ', ' ', c, c, '\n',
        ' ', ' ', ' ', c, c, c, c, '\n',
        ' ', c, c, c, c, c, c, c, c, '\n',
        c , c, c, c, c, c, c, c, c, c, '\n',
        c , c, c, c, c, c, c, c, c, c, '\n',
        c , c, c, c, c, c, c, c, c, c, 0
    };
    printf(house);
    }