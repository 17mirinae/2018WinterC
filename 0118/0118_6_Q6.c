//(1) 1���� n���� ���� ����ϴ� �Լ��� ����
//(2) �ڿ��� n(����Ȯ��)�� �Է¹���
//(3) �� �Լ��� �̿��Ͽ� ���� ���
//(4) ���� main �Լ����� ���
#include <stdio.h>

int add(int);

int main(void)
{
	int n, sum = 0, i;

	do {
		printf("�ڿ��� n�� �Է�: ");
		scanf_s("%d", &n);
	} while (n < 1);

	sum = add(n);

	printf("��: %d\n\n", sum);

	return 0;
}
int add(int num)
{
	int i, sum = 0;

	for (i = 1; i <= num; i++)
		sum += i;

	return sum;
}