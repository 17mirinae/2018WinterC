//(1) �ڿ��� n(����Ȯ��)�� �Է¹���
//(2) 1���� n���� ���� ���
//(3) ���� ���
#include <stdio.h>

int main(void)
{
	int n, sum = 0, i;

	do {
		printf("�ڿ��� n�� �Է�: ");
		scanf_s("%d", &n);
	} while (n < 1);
	
	for (i = 1; i <= n; i++)
		sum += i;

	printf("��: %d\n\n", sum);

	return 0;
}  