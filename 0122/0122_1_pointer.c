#include <stdio.h>

int main(void)
{
	int a = 14;
	int *p = &a;	//������ p���ٰ� a�� �ּҸ� ����

	printf("%d\t%d\n", a, &a);
	printf("%d\t%d\n\n", p, *p);	//ù ��° p�� �׳� p�� ��(a�� �ּ�)
									//�� ��° *p�� p�� ������ �ִ� �ּ�(a�� �ּ�)�� �ִ� ��(a�� ��)

	return 0;
}