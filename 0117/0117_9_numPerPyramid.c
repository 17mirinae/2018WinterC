#include <stdio.h>

void printStars(int);

int main(void)
{
	int row;

	printf("Enter the number of rows: ");
	scanf_s("%d", &row);

	printStars(row);

	getchar();
	getchar();

	return 0;
}
void printStars(int row)
{
	int i, j, k, l;
	int num = 0;

	l = row;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < l; j++)
			printf("  ");
		l--;
		for (k = 0; k < (2 * i + 1); k++) {
			if (k <= i)
				printf("%d ", ++num);
			else
				printf("%d ", --num);
		}

		puts("");
	}
}