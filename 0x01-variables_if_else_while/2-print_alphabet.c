#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return always 0
 */
int main(void)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
