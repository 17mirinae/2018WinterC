#include <stdio.h>

double average(int arr[]);

int main(void)
{
	double ave;
	int arr[5] = { 3, 7, 2, 4, 5 };

	ave = average(arr);
	printf("Æò±Õ: %lf\n", ave);

	return 0;
}
double average(int arr[])
{
	int sum = 0, i;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	return sum / 5.0;
}