#include <stdio.h>

int main(void)
{
	int x, data[10] = { 12, 8, 5, 16, 31, 27, 41, 1, 19, 12 };
	int *ptr;

	ptr = &data[0];

	for (x = 0; x < 10; x++)
	{
		printf("%p - %d\n\n", ptr, *ptr);
		ptr += 1;
	}

	return 0;
}