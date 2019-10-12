#include <stdio.h>

void getData(int *pa, int *pb);

int main(void)
{
	int a, b;
	//int *pa = &a, *pb = &b;

	getData(&a, &b);

	puts("");

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
void getData(int *pa, int *pb)
{
	printf("Please enter two integer numbers: ");
	scanf_s("%d %d", pa, pb);

	printf("a=%d, b=%d", *pa, *pb);
}