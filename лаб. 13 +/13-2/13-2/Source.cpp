#include <string>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main()

{
    int p, i, k, t, n, l;
	char st[100];
	puts("BBedite stroky");
	gets_s(st);
	k = strlen(st);
	t = 0; n = 0; p = 0;
	for (i = 0; i < k; i += 0)
	{
		if (st[i] == ' ') i++;
		else
		{
			t = i;
			while ((st[t] == '1') || (st[t] == '0'))
			{
				t++; p++;
			}
			if (p % 2)
			{
				for (l = i; l < t; l++)
					if (st[l] == '1') n++;
			}
			p = 0;
			i = t;
		}
	}
	cout << "rezultat=";
	cout << n;
	return 0;
}