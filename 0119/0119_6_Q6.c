#include <stdio.h>

int findMax(int arr[], int size)
{
	int x, max = arr[0];
	for (x = 1; x < max; x++)
		if (arr[x] > max) max = arr[x];
	return max;
}
int main(void)
{
	int data[10] = { 12, 8, 5, 16, 31, 27, 41, 1, 19, 12 }, max;
	max = findMax(data, 10);
	return 0;
}