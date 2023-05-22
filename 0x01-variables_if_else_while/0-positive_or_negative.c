#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if a number is postive, zero or nagative
 * return: Always (success)
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 7;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n" n);
        }
        else
        {
		printf("%d is nadative\n", n);
	}
        return (0);
}
