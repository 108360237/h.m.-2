#include<stdio.h>

int main()
{
	int n1, n2, n3;


	printf("叫块计:");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2)
	{
		if (n1 > n3)
		{
			if (n2 > n3)
			{
				printf("程:%d\n", n1);
				printf("程:%d", n3);
			}
			else(n2 < n3);
			{
				printf("程:%d\n", n1);
				printf("程:%d", n2);
			}
		}
	}
	if (n2 > n1)
	{
		if (n2 > n3)
		{
			if (n1 > n3)
			{
				printf("程:%d\n", n2);
				printf("程:%d", n3);
			}
			else;
			{
				printf("程:%d\n", n2);
				printf("程:%d", n1);
			}
		}
	}
	if (n3 > n2)
	{
		if (n3 > n1)
		{
			if (n2 > n1)
			{
				printf("程:%d\n", n3);
				printf("程:%d", n1);
			}
			else;
			{
				printf("程:%d\n", n3);
				printf("程:%d", n2);
			}
		}
	}
}