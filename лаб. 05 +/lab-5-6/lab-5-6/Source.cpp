#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("������!! 1 - ������,2 - ���� ");
	cin >> k;
	switch (k)
	{
	case 1: {
		puts("��� ����? 1 - ������,2 - ����� ");
		cin >> k;
		switch (k) {
		case 1: puts("���������"); break;
		case 2: puts("�����������"); break;
		}
		break;
	}
	case 2: puts("����o"); break;
	default: puts("������������ �����"); break;
	}
	return 0;
}