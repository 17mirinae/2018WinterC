#include <stdio.h>
#define size 10

void mulPtr(int *, int);

int main(void)
{
	int arr[size];
	int *p = arr;

	for (p = arr; p < arr+size; p++)
		scanf_s("%d", p);

	

	mulPtr(arr, size);

	for (p = arr; p < arr + size; p++)
		printf("%d ", *p);

	return 0;
}
void mulPtr(int *ary, int SIZE)
{
	int *k;

	for (k = ary; k < ary + SIZE; k++)
		*k = (*k)*2;
}