//���� 1���� num�� ������ Ȯ��
#include <stdio.h>

int main(void)
{
	int num, i;

	printf("2���� 9 ������ ������ �Է�: ");
	scanf_s("%d", &num);

	while (num < 2 || num > 9)
	{
		printf("���� ���̴� �ٽ� �Է�: ");
		scanf_s("%d", &num);
	}

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d", num, i, num*i);
		puts("");
	}


	return 0;
}