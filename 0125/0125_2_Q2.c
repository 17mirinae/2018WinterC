#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
	int hour;
	int minute;
	int second;
} CLOCK;

void increment(CLOCK* clock);
void show(CLOCK* clock);
int main(void)
{
	CLOCK clock = { 15, 59, 59 };
	int i;

	for (i = 0; i < 5; i++) {
		increment(&clock);
		show(&clock);		
	}

	return 0;
}
void increment(CLOCK* clock)
{
	clock -> second++;
	if (clock -> second == 60) {
		clock -> second = 0;
		clock -> minute++;
		if (clock -> minute == 60) {
			clock -> minute = 0;
			clock -> hour++;
			if (clock -> hour == 24) {
				clock -> hour = 0;
			}
		}
	}
}
void show(CLOCK* clock)
{
	printf("%.2d : %.2d : %.2d\n", clock -> hour, clock -> minute, clock -> second);
}