#include <stdio.h>

int main(void)
{
	int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int *pWalk;
	int *pEnd = &arr[9];

	for (pWalk = arr; pWalk <= pEnd; pWalk++)
		printf("%d\n", *pWalk);

	puts("");

	for (pWalk = pEnd; pWalk >= arr; pWalk--)
		printf("%d\n", *pWalk);

	puts("");

	return 0;
}
