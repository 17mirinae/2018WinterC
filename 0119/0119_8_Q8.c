#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int data[10], i, num = 0;

	for (i = 0; i < 10; i++) {
		data[i] = rand() % 101;
		printf("%d ", data[i]);
		if (data[i] % 10 == 0)
			num++;
	}

	puts("");
	printf("%d ", num);

	return 0;
}