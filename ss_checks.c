#include "shell.h"
/**
 *checks- checks to see if its a built in function
 *@inp: tokenized user input
 *@buf: line derived from getline function
 *Return: 1 if input is executed or  0 if otherwise
 */
int checks(char **inp, char *buf)
{
	if (handle_builtin(inp, buf))
		return (1);
	else if (**inp == '/')
	{
		exec(inp[0], inp);
		return (1);
	}
	return (0);
}
