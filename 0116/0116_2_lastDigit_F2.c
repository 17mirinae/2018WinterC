#include <stdio.h>

int getnum(void);

int main(void)
{
	int num;
	int onedigit;

	num = getnum();

	onedigit = num % 10;

	printf("�Էµ� ������ ������ ���ڸ����� %d�̴�.", num);

	getchar();
	getchar();

	return 0;
}
int getnum(void)
{
	int num;

	printf("���� �ϳ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	return num;
}