#include <stdio.h>

/**
 * Fizz-Buzz test - prints 1 to 100 changing % 3 for Fizz and % 5 for Buzz
 * Description: prints "1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz..."
 * returns: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
