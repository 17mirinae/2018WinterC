#include <stdio.h>

int getNum(void);
void lastDigit(int);

int main(void)
{
	int getnum;

	getnum = getNum();

	lastDigit(getnum);

	getchar();
	getchar();

	return 0;
}
int getNum(void)
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	return num;
}
void lastDigit(int num)
{
	printf("�Էµ� ������ ������ ���ڸ����� %d�̴�.", num % 10);
}