#include <stdio.h>

void getData(int *pa, int *pb);
int add(int, int);
void printRes(int *, int *, int *);

int main(void)
{
	int a, b, sum = 0;
	//int *pa = &a, *pb = &b;

	getData(&a, &b);

	printRes(&a, &b, &sum);

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
void printRes(int *a, int *b, int *sum)
{
	*sum = add(*a, *b);
	printf("두 정수의 합은 %d이다.\n", *sum);
}