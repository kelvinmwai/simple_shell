#include "shell.h"

/**
 * exec - executes any commands entered by a user
 *@cmd: command
 *@inp:vector array of pointers to user commands
 * Return: 0 (success)
 */
void exec(char *cmd, char **inp)
{
	pid_t child_pid;
	int status;
	char **env = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cmd);
	if (child_pid == 0)
	{
		execve(cmd, inp, env);
		perror(cmd);
		free(cmd);
		free_buffers(inp);
		exit(98);
	}
	else
		wait(&status);
}

