#include <stdio.h>

int main(void)
{
	float weight, height, height_,  bmi;

	printf("�� bmi ���� ����ϱ� ��\n");
	printf("bmi ���� ���� : ������ / ������ ����\n");
	printf("\n������(kg) : ");
	scanf_s("%f", &weight);
	printf("����(cm) : ");
	scanf_s("%f", &height);
	height_ = height / 100;
	printf("\n������(kg) : %.2fkg\n", weight);
	printf("����(m) : %.2fm\n", height_);
	bmi = weight / (height_ * height_);
	printf("\nbmi ���� = %.1f\n", bmi);
	if (bmi <= 18.5)
		printf("��ü��\n");
	else if (bmi > 18.5 && bmi <= 24.9)
		printf("���� ü��\n");
	else if (bmi > 24.9 && bmi <= 29.9)
		printf("��ü��\n");
	else if(bmi > 29.9 && bmi <= 34.9)
	{
		printf("��\n");
		printf("������ȯ �ߺ����輺 : ����\n");
	}
	else if (bmi > 34.9 && bmi <= 39.9)
	{
		printf("��\n");
		printf("������ȯ �ߺ����輺 : �ſ� ����\n");
	}
	else
	{
		printf("�ش��� ��\n");
		printf("������ȯ �ߺ����輺 : �ش������� ����\n");
	}
	return 0;
}