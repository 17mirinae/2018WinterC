#include <stdio.h>

void getData(int *pa, int *pb);
int add(int, int);

int main(void)
{
	int a, b;
	//int *pa = &a, *pb = &b;

	getData(&a, &b);

	printf("�� ������ ���� %d�̴�.\n", add(a, b));

	return 0;
}
void getData(int *pa, int *pb)
{
	printf("Please enter two integer numbers: ");
	scanf_s("%d %d", pa, pb);
}
int add(int a, int b)
{
	return a + b;
}