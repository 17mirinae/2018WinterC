#include <stdio.h>

int main(void)
{
	int i, arr[10] = { 12, 8, 5, 16, 31, 27, 41, 1, 19, 12 };
	int number, max = arr[0];

	for (i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			number = i + 1;
		}
	}

	printf("�ְ��� %d�̰�, �ְ��� ���� �л��� %d�� �л��̴�.\n\n", max, number);

	return 0;
}