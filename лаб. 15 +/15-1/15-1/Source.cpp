#include <iostream>
#include <ctime>
#include <stdio.h>	
#include <stdlib.h>

using namespace std;
int main()
{
	const int N = 10; 
	int sz = 10;
	int *ptr, i, n, count = 0, A[N];
	float sum = 0, c;
	cout << ("BBedite C=:");
	cin >> c;
	srand((unsigned)time(NULL));
	int rmn = -10, rmx = 10;
	printf("BBedite razmer massiva, sz < 10 \n");
	scanf("%d", &sz);

	if (!(ptr = (int*)malloc(sz * sizeof(int)))) 
	{	                                     
		puts("Not enough memory");
		return;
	}


	cout << "MACCIB:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}

	for (i = 0; i < sz; i++)
		if (A[i] < c) {
			count++;
		}
	cout << ("Kolichestvo elementov menshih C:") << count << endl;

	for (i=0; i < sz; i++)
		if (A[i] < 0) {
			n = i;
		}

	for (n; n < sz; n++)
	{
	     sum += int(A[n]);
	}
	cout << ("CYMMA elementov racpolozenih posle otritsatelnogo: ") << sum << endl;
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));

	free(ptr);

}