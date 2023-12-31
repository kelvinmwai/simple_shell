#include "shell.h"

/**
* tst_pth - checks whether path is valid
* @pth: tokenized path
* @comm: user entered command
*
* Return: path appended with command on success
* NULL on failure
*/
char *tst_pth(char **pth, char *comm)
{
	int x = 0;
	char *output;

	while (pth[x])
	{
		output = append_path(pth[x], comm);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		x++;
	}
	return (NULL);
}
