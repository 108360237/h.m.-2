#include<stdio.h>

int main(void)
{
	int n1;
	scanf_s("%d", &n1);
	if (n1 % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}