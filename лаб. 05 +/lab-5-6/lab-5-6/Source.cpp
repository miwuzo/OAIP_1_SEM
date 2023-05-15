#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("привет!! 1 - привет,2 - пока ");
	cin >> k;
	switch (k)
	{
	case 1: {
		puts("как дела? 1 - хорошо,2 - плохо ");
		cin >> k;
		switch (k) {
		case 1: puts("прикольно"); break;
		case 2: puts("неприкольно"); break;
		}
		break;
	}
	case 2: puts("ладнo"); break;
	default: puts("неправильный ответ"); break;
	}
	return 0;
}