#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int limit = 10;								//���(�i��) 

	int i;										//�j����ܼ� 

	printf("number\tsquare\tcube\n");			//�L�X���D,������tab�j�} 

	for (i = 0; i < (limit + 1); i++)					//���O�L�X���,���n,��n,�����Htab�j�},���� 
	{
		printf("%d\t%d\t%d\n", i, i * i, i * i * i);
	}

	system("pause");							//�������d 
	return 0;
}