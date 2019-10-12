#include <stdio.h>

void printStars(int);

int main(void)
{
	int num;

	printf("Enter the number of rows: ");
	scanf_s("%d", &num);

	printStars(num);

	getchar();
	getchar();

	return 0;
}
void printStars(int num)
{
	int i, j;

	for (i = 0; i < num; i++)
	{
		for (j = i; j >= 0; j--)
			printf("* ");

		puts("");
	}
}