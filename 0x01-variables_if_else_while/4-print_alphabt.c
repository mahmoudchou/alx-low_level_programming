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
	char i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		if (i != 'q' && i != 'e')
	{
			putchar(i);
	}
	}
	putchar('\n');
	return (0);
}
