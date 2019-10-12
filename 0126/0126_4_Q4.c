#include <stdio.h>
#define NUM_STU 5

typedef struct {
	char name[26];
	int midterm[3];
	int final;
} STUDENT;
STUDENT findFinalTop(STUDENT stuArr[])
{
	STUDENT topStu = stuArr[0];
	int i;

	for (i = 1; i < NUM_STU; i++)
	{
		if (topStu.final <= stuArr[i].final)
			topStu = stuArr[i];
	}

	return topStu;
}
int main(void)
{
	int i;
	STUDENT topStu;
	STUDENT stuArr[NUM_STU] = {
		{ "������",{ 85, 94, 79 }, 93 },
		{ "������",{ 75, 91, 89 }, 89 },
		{ "������",{ 87, 88, 89 }, 90 },
		{ "�����",{ 78, 96, 88 }, 91 },
		{ "��ȿ��",{ 83, 79, 93 }, 91 }
	};

	for (i = 0; i < NUM_STU; i++)
	{
		printf("�̸�: %s\n�߰� ����: %d, %d, %d\n�⸻ ����: %d\n",
			stuArr[i].name, stuArr[i].midterm[0], stuArr[i].midterm[1], stuArr[i].midterm[2], stuArr[i].final);
	}

	topStu = findFinalTop(stuArr);

	printf("�⸻ ���� ���� �л��� = %s\n", topStu.name);

	return 0;
}