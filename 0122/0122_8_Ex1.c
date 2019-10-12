#include <stdio.h>

void exchange(int *pa, int *pb);
void getData(int *, int *);

int main(void)
{
	int a, b;
	int *pa = &a, *pb = &b;

	getData(&a, &b);

	printf("a=%d b=%d\n", a, b);

	exchange(&a, &b);

	printf("a=%d b=%d\n", a, b);

	return 0;
}
void exchange(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void getData(int *pa, int *pb)
{
	printf("Please enter two integer: ");
	scanf_s("%d %d", pa, pb);
}