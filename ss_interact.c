#include "shell.h"


/**
 * interact – checks whether shell is in interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode and 0 if otherwise
 */
int interact(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}


