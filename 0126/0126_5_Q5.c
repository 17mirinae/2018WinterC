#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int hour;
	int minute;
	int second;
}clock;

clock *minus(clock *stime, clock *etime)
{
	clock *dtime = (clock *)malloc(sizeof(clock));


	(*dtime).second = (*etime).second - (*stime).second;
	if ((*dtime).second < 0) {
		(*dtime).second += 60;
		(*dtime).minute = (*etime).minute - (*stime).minute;
		(*dtime).minute--;
	}
	else {
		(*dtime).minute = (*etime).minute - (*stime).minute;
	}

	if ((*dtime).minute < 0) {
		(*dtime).minute += 60;
		(*dtime).hour = (*etime).hour - (*stime).hour;
		(*dtime).hour--;
	}
	else {
		(*dtime).hour = (*etime).hour - (*stime).hour;
	}

	if ((*dtime).hour < 0) {
		(*dtime).hour += 24;
	}

	return dtime;
}
clock *enterTime(void)
{
	clock *time = (clock *)malloc(sizeof(clock));
	printf("Enter the time(EX: 14 52 34): ");
	scanf_s("%d %d %d", &(*time).hour, &(*time).minute, &(*time).second);
	return time;
}
int main(void)
{
	clock *stime, *etime, *dtime;

	stime = enterTime();
	etime = enterTime();

	dtime = minus(stime, etime);

	printf("경과시간 : %.2d : %.2d : %.2d\n", (*dtime).hour, (*dtime).minute, (*dtime).second);

	return 0;
}