#include<stdio.h>

int main()
{
	double a, b, c, d, e;
	printf("�@��Ѫ��`���{��:\n");
	scanf_s("%lf", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�:\n");
	scanf_s("%lf", &b);
	printf("�����@����/�[�گ��p�h�֤���:\n");
	scanf_s("%lf", &c);
	printf("�@�Ѫ������O:\n");
	scanf_s("%lf", &d);
	printf("�@�Ѫ��q��O(�L���O):\n");
	scanf_s("%lf", &e);
	printf("�`��O: %lf", a * b / c + d + e);

	return 0;
}
