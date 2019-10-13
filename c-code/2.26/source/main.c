#include<stdio.h>

int main(void)
{
	int n1, n2;

	scanf_s("%d %d", &n1, &n2);
	if (n1 % n2 == 0)
	{
		printf("n1是n2的倍數");
	}
	else;
	{
		printf("n1不是n2的倍數");
	}
	return 0;
}