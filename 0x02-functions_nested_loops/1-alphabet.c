#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a' ; lettre <= 'z' ; lettre++)
		_putchar(lettre);
	_putchar('\n');
}
