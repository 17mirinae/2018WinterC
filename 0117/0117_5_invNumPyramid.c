#include <stdio.h>

void printNums(int);

int main(void)
{
	int num;

	printf("Enter the number of rows: ");
	scanf_s("%d", &num);

	printNums(num);

	getchar();
	getchar();

	return 0;
}
void printNums(int row)
{
	int i, j, num = 0;

	for (i = row; i >= 0; i--)
	{
		for (j = i; j > 0; j--)
			printf("%d ", ++num);

		puts("");
		num = 0;
	}
	
}