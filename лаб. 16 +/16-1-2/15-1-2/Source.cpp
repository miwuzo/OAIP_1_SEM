#include <iostream>
#include <ctime>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <cstring>
#include <string>
#include <string.h>

using namespace std;
void massiv();
void stroka();

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int c;
	cout << endl;
	cout << "¬ведите" << endl;
	cout << "1 - 1 задание" << endl;
	cout << "2 - 2 задание" << endl;
	cout << "3-выход" << endl;
	cin >> c;
	
	switch (c)
	{
	case 1: massiv(); break;
	case 2: stroka(); break;
	case 3: break;
	}
}
void massiv()
{
		float A[150], C;
		int n, i, k;
		printf("Vvedite colichestvo elementov massiva\n");
		scanf_s("%d", &n);

		for (i = 0; i < n; i++)
		{
			printf("A[%d]\n", i);
			scanf_s("%f", &A[i]);
		}

		printf("Vvedite C\n");
		scanf_s("%f", &C);

		for (i = k = 0; i < n; i++)
			if (A[i] > C) k++;
		printf("col-vo=%d\n", k);

		int max = 0;
		for (i = 1; i < n; i++)
			if (abs(A[i]) > abs(A[max]))
				max = i;

		float proizv = 1.0;
		for (i = max + 1; i < n; i++)
			proizv *= A[i];

		printf("Proizvedenie=%.2f", proizv);
		
}
void stroka()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		puts("BBedite stroky");
		char str[10], ch='a';
		const char* prob = " ";
		char newChar[10];
		
		cin >> str;

		for (int i = 0; i < 10; i++)
		{
			if (str[i] == *prob)
			{
				break;
			}
			else {
				newChar[i] = toupper(str[i]);
			}
		}

		cout << newChar;
}
	