#include <stdio.h>

int main()
{
	int layer = 5;				//�h��(�i�H�ݨD�H�N���)
	int space;					//�C�h�n���Ů�
	int line = 0;					//�ثe�e��ĴX��
	int count = 1;				//�P�P�Ӽ�,�w�]��1

	int i;						//�j����ܼ�

	space = layer - 1;				//��l�ƪŮ�Ӽ�(�e�ϼ�����D�����o��)
	while (line != layer)			//��e����Ƥ�����h�ƴN���U���Ʊ�
	{
		for (i = 0; i < space; i++)	//����X�Ů�
		{
			printf(" ");
		}
		space -= 1;				//�h�@��,�Ů�֤@��(�e�ϼ�����D�����o��)
		for (i = 0; i < count; i++)	//�e�X�P�P
		{
			printf("*");
		}
		count += 2;				//�h�@��,�P�P�h���(�e�ϼ�����D�����o��)
		printf("\n");			//�e��(�Ů�+�P�P)�H�ᴫ��
		line += 1;				//�e����ƥ[�@
	}
	return 0;
}
