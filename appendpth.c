#include "shell.h"

/**
* append_path - adds path to specific command
* @path: path of the command
* @command: command entered by user
*
* Return: buffer containing command with path |NULL on failure
*/
char *append_path(char *path, char *command)
{
	char *buff;
	size_t x = 0, y = 0;

	if (command == 0)
		command = "";

	if (path == 0)
		path = "";

	buff = malloc(sizeof(char) * (_strlen(path) + _strlen(command) + 2));
	if (!buff)
		return (NULL);

	while (path[x])
	{
		buf[x] = path[x];
		x++;
	}

	if (path[x - 1] != '/')
	{
		buff[x] = '/';
		x++;
	}
	while (command[y])
	{
		buff[x + y] = command[y];
		x++;
	}
	buff[x + y] = '\0';
	return (buff);
}

