#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{

	/* your code goes there */
	int i;

	for (i = 0 ; i < 10 ; i++)

	{
			putchar(i + '0');
			if (i != 9)
			{
				putchar(',');
			}
			putchar(' ');
	}

	return (0);
}
