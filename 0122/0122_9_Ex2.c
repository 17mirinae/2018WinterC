#include <stdio.h>

char scoreToGrade(int);

int main(void)
{
	int score;

	printf("Enter the test score(0-100): ");
	scanf_s("%d", &score);

	printf("%c\n", scoreToGrade(score));

	return 0;
}
char scoreToGrade(int score)
{
	if (score >= 90)
		return 'A';
	else if (score >= 80 && score < 90)
		return 'B';
	else if (score >= 70 && score < 80)
		return 'C';
	else if (score >= 60 && score < 70)
		return 'D';
	else
		return 'F';
}