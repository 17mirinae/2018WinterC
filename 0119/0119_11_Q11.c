#include <stdio.h>
#define SIZE 100

int main(void)
{
	int score[SIZE][3], i = 0, j = 0, temp;

	while ((fscanf(fp, "%d", &temp)) != EOF)
	{
		score[i][j] = temp;
		if (j == 2)
		{
			i++;
			j = 0;
		}
	}

	for (i = 0; i < 10; i++)
		for (j = 0; j < 3; j++) {

		}

	return 0;
}