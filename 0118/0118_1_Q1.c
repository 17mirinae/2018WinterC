//2~9 ���� ���� num�� �Է¹޾� ������ num���� ���
#include <stdio.h>

int main(void)
{
	int num, i;

	printf("2���� 9 ������ ������ �Է�: ");
	scanf_s("%d", &num);

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d", num, i, num*i);
		puts("");
	}
	
	
	return 0;
}