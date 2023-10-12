#include "shell.h"

/**
* exit_cmd - handles the exit command
* @comm: tokenized command
* @rin: input read from stdin
*
* Return: no return
*/
void exit_cmd(char **comm, char *rin)
{
	free(rin);
	free_buff(comm);
	exit(0);
}

