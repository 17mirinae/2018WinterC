//(1) ������ n���� ����ϴ� �Լ��� ����
//(2) �� �Լ��� �̿��Ͽ� ���� 3�� �ذ�
#include <stdio.h>

void printGu(int);

int main(void)
{
	int num, i;

	printf("(4-1) 2���� 9 ������ ������ �Է�: ");
	scanf_s("%d", &num);

	while (num < 2 || num > 9)
	{
		printf("���� ���̴� �ٽ� �Է�: ");
		scanf_s("%d", &num);
	}

	printGu(num);
	puts("");

	printf("(4-2) 2~9�� ���\n\n");

	for (i = 2; i < 10; i++) {
		printGu(i);
		puts("");
	}

	return 0;
}
void printGu(int num)
{
	int i, j;

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d", num, i, num*i);
		puts("");
	}
}