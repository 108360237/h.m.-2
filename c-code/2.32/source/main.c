#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("請輸入身高(公尺,若為整數則補小數點和0)\n");		//列印文字 
	float height;											//身高				
	scanf_s("%f", &height);									//取得輸入,並存到身高 

	printf("請輸入體重(公斤,若為整數則補小數點和0)\n");		//列印文字 
	float weight;											//體重
	scanf_s("%f", &weight);									//取得輸入,並存到體重

	printf("BMI為: %2f\n", weight / (height * height));			//列印文字(取到小數點後兩位),bmi=體重/(身高平方) 

	system("pause");
	return 0;
}