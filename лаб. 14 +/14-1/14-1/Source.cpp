#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int N = 3;
    int mas[N][N];
    int i, j, sum, max_count;
    srand(time(NULL));
    cout << "������������ �������� ��������: ";
    cin >> max_count;
    cout << "�������: " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            mas[i][j] = rand() % max_count;
            cout << mas[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    int s = 0;
    for (int i = 0; i < N; ++i)  // i ������ ������
    {
        for (int j = 0; j < N; ++j) // j ����� �������
        {
            if (i < j) //���� ����� ������ < ������ ������� ����� �� �������� �������� ��� ������� ����������. 
            {
                cout << mas[i][j] << ", ";
                s += mas[i][j];
            }
        }
    }
    cout << "����� ���������, ������� ���� ������� ���������: " << s;
    cout << "\n";
    int s1 = 0;
    cout << "\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i > j)
            {
                cout << mas[i][j] << ", ";
                s1 += mas[i][j];
            }
        }
    }
    cout << "����� ���������, ������� ���� ������� ���������: " << s1;
}