#include<stdio.h>

int main()
{
	int n1, n2, n3;


	printf("�п�J�T�Ӽ�:");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2)
	{
		if (n1 > n3)
		{
			if (n2 > n3)
			{
				printf("�̤j��:%d\n", n1);
				printf("�̤p��:%d", n3);
			}
			else(n2 < n3);
			{
				printf("�̤j��:%d\n", n1);
				printf("�̤p��:%d", n2);
			}
		}
	}
	if (n2 > n1)
	{
		if (n2 > n3)
		{
			if (n1 > n3)
			{
				printf("�̤j��:%d\n", n2);
				printf("�̤p��:%d", n3);
			}
			else;
			{
				printf("�̤j��:%d\n", n2);
				printf("�̤p��:%d", n1);
			}
		}
	}
	if (n3 > n2)
	{
		if (n3 > n1)
		{
			if (n2 > n1)
			{
				printf("�̤j��:%d\n", n3);
				printf("�̤p��:%d", n1);
			}
			else;
			{
				printf("�̤j��:%d\n", n3);
				printf("�̤p��:%d", n2);
			}
		}
	}
}