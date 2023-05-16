#include <stdio.h> 
#include <conio.h> 
#include <locale> 
int main()
{
    setlocale(LC_ALL, "rus");
    int i, j;
    int n;
    int s = 0;
    int b[100][100];
    printf("Введите количествво строк и столбцов матрицы: \n");
    scanf_s("%d", &n);


    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Элемент [%d,%d]:", i + 1, j + 1);
            scanf_s("%d", &b[i][j]);
        }
    printf("матрица: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    for (j = 0; j < n; j++)
    {

        for (i = 0; i < n; i++)
        {
            s += (b[i][j] * b[i][j]);
        }
        if (s == 0)
        {
            printf("Столбец %d содержит все нулевые элементы", j + 1);

        }
        else
        {
            s = 0;
        }
    }





    int f;
    for (j = 0; j < n; j++) {
        for (i = 0, f = 0; i < n; i++) {
            if (b[i][j] != 0)
                f = 1;
        }
        if (f != 0) {
            for (int k = 0; k < n; k++)
                b[j][k] *= -1;
            break;
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf(b[i][j]);
        printf("\n");
    }




}