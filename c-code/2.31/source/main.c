#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int limit = 10;								//邊長(可改) 

	int i;										//迴圈用變數 

	printf("number\tsquare\tcube\n");			//印出標題,中間用tab隔開 

	for (i = 0; i < (limit + 1); i++)					//分別印出邊長,面積,體積,中間以tab隔開,換行 
	{
		printf("%d\t%d\t%d\n", i, i * i, i * i * i);
	}

	system("pause");							//視窗停留 
	return 0;
}