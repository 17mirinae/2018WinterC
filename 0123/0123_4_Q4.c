#include <stdio.h>

int comparefunc(int *, int *, int);

int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 1, 2, 3, 4, 5 };
	int num, *pa = a, *pb = b;

	num = comparefunc(pa, pb, 5);

	if (num == 0)
		printf("�� �迭�� �ٸ���.\n");
	else if (num == 1)
		printf("�� �迭�� ����.\n");

	return 0;
}
int comparefunc(int *a, int *b, int size)
{
	int *pa = a, *pb = b;
	int num = 0;

	for (pa = pb; pa < a + size; pa++) {
		if (*pa == *pb) {
			num++;
		}
		pb++;
	}

	if (num == size)
		return 1;
	else
		return 0;
}