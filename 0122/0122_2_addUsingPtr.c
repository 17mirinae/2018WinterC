#include <stdio.h>

int main(void)
{
	int a, b, sum;
	int *pa = &a, *pb = &b, *psum = &sum;	//&a=a�� �ּ� a=���� �����ϴ� ���� *pa=a�� �ּҸ� �����ϴ� ����

	printf("���� �� ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	*psum = *pa + *pb;

	printf("���� %d�̴�.\n", *psum);

	return 0;
}