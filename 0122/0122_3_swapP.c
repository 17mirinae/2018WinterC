#include <stdio.h>

void exchange(int *pa, int *pb);

int main(void)
{
	int a = 5, b = 7;
	int *pa = &a, *pb = &b;

	printf("a=%d b=%d\n", *pa, *pb);

	exchange(&a, &b);

	printf("a=%d b=%d", *pa, *pb);

	return 0;
}
void exchange(int *pa, int *pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}