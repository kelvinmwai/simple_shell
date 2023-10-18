#include "shell.h"

/**
* handle_builtin - handles execution of builtin functions
* @comm: tokenized commands
* @rin: input read from stdin
*
* Return: 1 if executed, 0 if not
*/
int handle_builtin(char **comm, char *rin)
{
	struct builtin builtin = {"env", "exit"};

	if (_strchk(*comm, builtin.env) == 0)
	{
		print_env();
		return (1);
	}
	else if (_strchk(*comm, builtin.exit) == 0)
	{
		exit_cmd(comm, rin);
		return (1);
	}
	return (0);
}

