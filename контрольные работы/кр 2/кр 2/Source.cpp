
#include <iostream> 
using namespace std;
void main()
{
    char str1[100];
    char str2[100];
    unsigned int   i, k = 0;

    cout << "BBedite stroky: ";
    gets_s(str1);

    for (i = 0; str1[i]; i++)
    {
        if (str1[i] == ',') {
            str2[k] = str1[i];
            k++;
            str2[k] = ' ';
            k++;
        }
        else   str2[k++] = str1[i];
    }
    str2[k] = '\0';
    cout << " Rezult : " << str2 << endl;
}