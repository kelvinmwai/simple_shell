
#include "shell.h"

/**
* _putchar - writes the character ch to stdout
* @ch:  character to be printed to stdout
*
* Return:  1 for success | -1 for error
*/
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

/**
* print_st - prints a string
* @st: string to be printed
*
* Return: number of characters printed
*/
int print_st(char *st)
{
	int y = 0;

	while (st[y] != '\0')
	{
		_putchar(st[y]);
		y++;
	}

	return (y);
}

