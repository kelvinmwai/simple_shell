#include "shell.h"

/**
* print_envr - prints the environment string to stdout
*
* Return: 0
*/
void print_envr(void)
{
	int i = 0;
	char **envr = environ;

	while (envr[i])
	{
		write(STDOUT_FILENO, (const void *)envr[i], _strlen(envr[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

