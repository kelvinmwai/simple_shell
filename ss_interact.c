#include "shell.h"

/**
 *is_interract- checks whether shell is in interactive mode
 *@h: the signal number
 *Return: nothing
 */

void is_interract(int h)
{
	(void)h;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
