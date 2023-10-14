#include "shell.h"
/**
* main - carries out the read, execute then print output loop
* @agc: argument count
* @agv: argument vector
* @env: environment vector
*
* Return: 0
*/

int main(int agc, char **agv, char *env[])
{
	char *line = NULL, *pathcommand = NULL, *path = NULL;
	size_t buffsize = 0;
	ssize_t linesize = 0;
	char **command = NULL, **paths = NULL;
	(void)env, (void)agv;
	if (agc < 1)
		return (-1);
	signal(SIGINT, handle_signal);
	while (1)
	{
		free_buff(command);
		free_buff(paths);
		free(pathcommand);
		user_prompt();
		linesize = getline(&line, &buffsize, stdin);

		if (linesize < 0)
			break;
		info.ln_count++;

		if (line[linesize - 1] == '\n')
			line[linesize - 1] = '\0';
		command = tokenize(rin);

		if (command == NULL || *command == NULL || **command == '\0')
			continue;
		if (checks(command, line))
			continue;
		path = find_path();
		paths = tokenize(path);
		pathcommand = tst_pth(paths, command[0]);

		if (!pathcommand)
			perror(agv[0]);
		else
			execution(pathcommand, command);
	}
	if (linesize < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(rin);
	return (0);
}

