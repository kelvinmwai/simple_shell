#include "shell.h"

/**
* find_path - finds the path from the entire environment
* Return: path | NULL if not found
*/
char *find_path(void)
{
	int y;
	char **env = environ, *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && y < 5)
			{
				path++;
				y++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}

