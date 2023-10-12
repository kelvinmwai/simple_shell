#include "shell.h"

/**
* user_prompt - shows ‘$’ to show the program is ready to take their input
* 	Prints the prompt if the shell is in interactive mode
* Return: no return
*/
void user_prompt(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}

