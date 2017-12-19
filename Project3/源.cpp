#include <stdio.h> 
#include<math.h>
int hui1(int x);
int hui2(int x);
int equal(int x, int y);
int main(void)
{
	int n;
	int flag = 1;
	scanf("%d", &n);
	int i, j;
	for (i = 10000; i <= 99999; i++)
	{
		if (hui1(i) == 1)
		{
			if (equal(i, n) == 1)
			{
				flag = 0;
				printf("%d\n", i);
			}
		}
	}

	for (i = 100000; i <= 999999; i++)
	{
		if (hui2(i) == 1)
		{
			if (equal(i, n) == 1)
			{
				printf("%d\n", i);
				flag = 0;
			}
		}
	}
	if (flag == 1)
		printf("-1");
	return 0;
}

int equal(int x, int y)
{
	int m = 0;
	int j;
	for (j = 1; j <= 6; j++)
	{
		m += x % 10;
		x = (int)x / 10;
	}
	if (m == y)
		return 1;
	else
		return 0;
}

int hui1(int x)
{
	if ((int)x / 10000 == x % 10)
	{
		if ((int)(x / 1000)%10== (x % 100 - (x % 10))/10)
			return 1;
	}
	else
		return 0;
}
int hui2(int x)
{
	if ((int)x / 100000 == x % 10)
	{
		if (((int)(x / 10000)%10) == (x % 100 - (x % 10))/10)
			if (((int)(x / 1000) %10) == (x % 1000 - ( x % 100) )/100)
				return 1;
			else return 0;
		else return 0;
	}
	else return 0;
}