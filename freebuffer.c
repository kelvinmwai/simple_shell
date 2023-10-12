#include "shell.h"

/**
* free_buff - frees buffer
* @buff: buffer to be freed
*
* Return: no return
*/
void free_buff(char **buff)
{
	int h = 0;

	if (!buff || buff == NULL)
		return;
	while (buff[h])
	{
		free(buff[h]);
		h++;
	}
	free(buff);
}

