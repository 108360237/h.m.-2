#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("�п�J����(����,�Y����ƫh�ɤp���I�M0)\n");		//�C�L��r 
	float height;											//����				
	scanf_s("%f", &height);									//���o��J,�æs�쨭�� 

	printf("�п�J�魫(����,�Y����ƫh�ɤp���I�M0)\n");		//�C�L��r 
	float weight;											//�魫
	scanf_s("%f", &weight);									//���o��J,�æs���魫

	printf("BMI��: %2f\n", weight / (height * height));			//�C�L��r(����p���I����),bmi=�魫/(��������) 

	system("pause");
	return 0;
}