#include <stdio.h>
#define SIZE 10

int main(void)
{
	int data[SIZE] = { 12, 8, 5, 16, 31, 27, 41, 1, 19, 12 };
	int i, j, temp;

	for (i = 9; i >= 0; i--) {
		for (j = 0; j <= i; j++) {
			if (data[j] < data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}	//내림차순

	for (i = 0; i < 10; i++)
		printf("%d ", data[i]);

	puts("");

	for (j = 9; j >= 0; j--) {
		for (i = 0; i < j; i++) {
			if (data[i] > data[i + 1]) {
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
			}
		}
	}	//오름차순

	for (i = 0; i < 10; i++)
		printf("%d ", data[i]);

	return 0;
}