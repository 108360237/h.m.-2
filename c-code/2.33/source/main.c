#include<stdio.h>

int main()
{
	double a, b, c, d, e;
	printf("一整天的總里程數:\n");
	scanf_s("%lf", &a);
	printf("汽油一公升/加侖多少錢:\n");
	scanf_s("%lf", &b);
	printf("平均一公升/加侖能行駛多少公里:\n");
	scanf_s("%lf", &c);
	printf("一天的停車費:\n");
	scanf_s("%lf", &d);
	printf("一天的通行費(過路費):\n");
	scanf_s("%lf", &e);
	printf("總花費: %lf", a * b / c + d + e);

	return 0;
}
