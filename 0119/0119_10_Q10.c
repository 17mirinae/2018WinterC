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
//�޸��� �ȿ��ٰ� �л��� ������ ������ �迭 �������� ���� �װ� ������ �� ��° �л��� ������ ���� ������ �϶�� �ǰ�?