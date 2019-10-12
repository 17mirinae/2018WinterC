#include <stdio.h>
#define SIZE 10

int findMaxIndex(int arr[], int size);

int main(void)
{
	int data[SIZE] = { 12, 8, 5, 16, 31, 27, 41, 1, 19, 12 };
	int size = SIZE, index, temp;

	while (size > 1)
	{
		index = findMaxIndex(data, size);
		temp = data[index];
		data[index] = data[size - 1];
		data[size - 1] = temp;
		size--;
	}

	for (temp = 0; temp < SIZE; temp++)
		printf("%d = %d\n", temp + 1, data[temp]);

	return 0;
}
int findMaxIndex(int arr[], int size)
{
	int index = 0, i;

	for (i = 1; i < size; i++)
		if (arr[i] > arr[index]) index = i;

	return index;
}