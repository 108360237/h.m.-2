#include <stdio.h>

int main()
{
	int layer = 5;				//層數(可隨需求隨意更改)
	int space;					//每層要的空格
	int line = 0;					//目前畫到第幾行
	int count = 1;				//星星個數,預設為1

	int i;						//迴圈用變數

	space = layer - 1;				//初始化空格個數(畫圖模擬後求公式得知)
	while (line != layer)			//當畫的行數不等於層數就做下面事情
	{
		for (i = 0; i < space; i++)	//先輸出空格
		{
			printf(" ");
		}
		space -= 1;				//多一行,空格少一個(畫圖模擬後求公式得知)
		for (i = 0; i < count; i++)	//畫出星星
		{
			printf("*");
		}
		count += 2;				//多一行,星星多兩個(畫圖模擬後求公式得知)
		printf("\n");			//畫完(空格+星星)以後換行
		line += 1;				//畫的行數加一
	}
	return 0;
}
