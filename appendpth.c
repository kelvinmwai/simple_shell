#include "shell.h"

/**
* append_path - adds path to specific command
* @pth: path of the command
* @comm: command entered by user
*
* Return: buffer containing command with path |NULL on failure
*/
char *append_path(char *pth, char *comm)
{
	char *buff;
	size_t x = 0, y = 0;

	if (comm == NULL)
		comm = "";

	if (pth == NULL)
		pth = "";

	buff = malloc(sizeof(char) * (_strlen(pth) + _strlen(comm) + 2));

	if (!buff)
		return (NULL);

	while (pth[x])
	{
		buff[x] = pth[x];
		x++;
	}

	if (pth[x - 1] != '/')
	{
		buff[x] = '/';
		x++;
	}
	while (comm[y])
	{
		buff[x + y] = comm[y];
		x++;
		y++;
	}
	buff[x + y] = '\0';
	return (buff);
}

