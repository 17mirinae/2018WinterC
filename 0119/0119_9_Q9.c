#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score[10][3], i, j, max, temp;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 3; j++)
			score[i][j] = rand() % 100;
	}

	max = score[0][0] + score[0][1] + score[0][2];
	//첫 번째 학생의 국어, 영어, 수학 성적의 합을 계산하고 그 값=max

	for (i = 1; i < 10; i++)
	{
		temp = (score[i][0] + score[i][1] + score[i][2]);
		//i번째 학생의 국어, 영어, 수학 성적의 합을 계산해서 max값과 크기를 비교, 위 값이 max 값보다 크다면 max값을 수정
		if (max < temp)
			max = temp;
	}

	return 0;
}