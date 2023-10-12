#include "shell.h"

/**
* tokenize - creates tokens from given input
* @rin: input to be tokenized
*
* Return: array of strings
*/
char **tokenize(char *rin)
{
	char *buff = NULL, *tbuff = NULL, *token = NULL, *delim = " :\t\r\n";
	char **tokens = NULL;
	int tokensze = 1;
	size_t i = 0, flag = 0;

	buff = _strndup(rin);
	if (!buff)
		return (NULL);
	tbuff = buff;

	while (*tbuff)
	{
		if (_strnch(delim, *tbuff) != NULL && flag == 0)
		{
			tokensze++;
			flag = 1;
		}
		else if (_strnch(delim, *tbuff) == NULL && flag == 1)
			flag = 0;
		tbuff++;
	}
	tokens = malloc(sizeof(char *) * (tokensze + 1));
	token = strtok(buff, delim);
	while (token)
	{
		tokens[i] = _strndup(token);
		if (tokens[i] == NULL)
		{
			free(tokens);
			return (NULL);
		}
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = '\0';
	free(buff);
	return (tokens);
}

