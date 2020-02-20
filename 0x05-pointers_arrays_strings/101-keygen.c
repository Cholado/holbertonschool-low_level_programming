#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int randNum;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		randNum = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
