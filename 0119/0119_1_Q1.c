#include <stdio.h>

int main(void)
{
	int arr[5] = {50, 60, 70, 80, 100};
	int sum = 0, i;
	float ave = 0.0;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	ave = sum / 5.0;
	printf("%f\n\n", ave);

	/*
	arr[0]=50;
	arr[1]=60;
	arr[2]=70;
	arr[3]=80;
	arr[4]=100;
	*/

	return 0;
}