#include <stdio.h>

typedef struct {
	int hour;
	int minute;
	int second;
}clock;

clock minus(clock stime, clock etime)
{
	clock dtime = { 0, 0, 0 };

	dtime.second = etime.second - stime.second;
	if (dtime.second < 0) {
		dtime.second += 60;
		dtime.minute--;
	}
	dtime.minute += etime.minute - stime.minute;
	if (dtime.minute < 0) {
		dtime.minute += 60;
		dtime.hour--;
	}
	dtime.hour += etime.hour - stime.hour;
	if (dtime.hour < 0) {
		dtime.hour += 24;
	}

	return dtime;
}
int main(void)
{
	clock stime;
	clock etime;
	clock dtime;

	printf("Enter the start(EX: 14 52 34): ");
	scanf_s("%d %d %d", &stime.hour, &stime.minute, &stime.second);
	printf("Enter the end(EX: 15 34 12): ");
	scanf_s("%d %d %d", &etime.hour, &etime.minute, &etime.second);

	dtime = minus(stime, etime);

	printf("경과시간 : %.2d : %.2d : %.2d\n", dtime.hour, dtime.minute, dtime.second);

	return 0;
}