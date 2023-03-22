#include <main.h>
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c:the charactr to print
 *
 * Return: On sucess
 * On error, -1 is returned, and errno is set appropiaply
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
