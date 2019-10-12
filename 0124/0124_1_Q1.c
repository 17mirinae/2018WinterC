#include <stdio.h>

int main(void)
{
	char month[10];

	printf("Please enter a month: ");
	scanf_s("%s", month, sizeof(month));

	printf("You entered %s\n", month);

	return 0;
}