#include "shell.h"

/**
* _strchk - compares two strings
* @s1: first string to compare
* @s2: second string to compare 
*
* Return: Difference between the two strings
*/
int _strchk(char *s1, char *s2)
{
	int x = 0, output;

	while (*(s1 + x) == *(s2 + x) && *(s1 + x) != '\0')
		x++;

	output = (*(s1 + x) - *(s2 + x));

	return (output);
}

/**
* _strlen - returns the length of a string
* @s: string to check
*
* Return: length of the string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
* _strcmp - compares two strings up to n bytes
* @s1: first string compared
* @s2: second string compared
* @n: number of bytes
*
* Return: difference between s1 and s2
*/
int _strcmp(char *s1, char *s2, int n)
{
	int x;

	for (x = 0; s1[x] && s2[x] && x < n; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}

/**
* _strndup - dupicates a string
* @st: string to be duplicated
*
* Return: pointer to duplicated string
*/
char *_strndup(char *st)
{
	char *pnt;
	int y, leng;

	if (st == NULL)
		return (NULL);

	leng = _strlen(st);

	pnt = malloc(sizeof(char) * (leng + 1));
	if (!pnt)
		return (NULL);
	for (y = 0; *st != '\0'; st++, y++)
		pnt[y] = st[0];

	pnt[y++] = '\0';
	return (pnt);
}

/**
* _strnch - find a character within a string
* @st: string to be checked
* @ch: character to be found
*
* Return: returns pointer to first location of character | NULL if character not found
*/
char *_strnch(char *st, char ch)
{
	while (*st)
	{
		if (*st == ch)
			return (st);
		st++;
	}
	if (!ch)
		return (st);
	return (NULL);
}

