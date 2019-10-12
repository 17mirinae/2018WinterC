#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void)
{
	int data[SIZE], i, num = 0;

	FILE *fp = fopen("data.txt", "r");

	while ((fscanf(fp, "%d", &i)) != EOF) //fscanf_s(&fp, "%d", &i);
	{
		i++;
	}

	fprintf(fp, "%d", i);

	fclose(fp);

	return 0;
}
//메모장 안에다가 학생들 점수를 이차원 배열 형식으로 놓고 그걸 가지고 몇 번째 학생이 점수가 제일 좋은지 하라는 건가?