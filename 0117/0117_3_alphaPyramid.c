#include <stdio.h>

void printAlpha(char);

int main(void)
{
	char alpha;

	printf("Enter the uppercase character you want to print in last row: ");
	scanf_s("%c", &alpha);

	printAlpha(alpha);

	getchar();
	getchar();

	return 0;
}
void printAlpha(char row)
{
	int i, j, alpha = 'A';

	for (i = 0; i < (row - 'A' + 1); i++)
	{
		for (j = i; j >= 0; j--)
			printf("%c ", alpha);

		puts("");
		alpha++;
	}
}