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
	//ù ��° �л��� ����, ����, ���� ������ ���� ����ϰ� �� ��=max

	for (i = 1; i < 10; i++)
	{
		temp = (score[i][0] + score[i][1] + score[i][2]);
		//i��° �л��� ����, ����, ���� ������ ���� ����ؼ� max���� ũ�⸦ ��, �� ���� max ������ ũ�ٸ� max���� ����
		if (max < temp)
			max = temp;
	}

	return 0;
}