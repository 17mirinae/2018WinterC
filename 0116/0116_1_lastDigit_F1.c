#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͽ���: ");
	scanf_s("%d", &num);

	printf("������ ������ ���ڸ����� %d�̴�.", num % 10);

	getchar();
	getchar();

	return 0;
}