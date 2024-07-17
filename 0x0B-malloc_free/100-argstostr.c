#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - Concatinates all the arguments of a program
 * @ac: An integer
 * @av: A pointer to an array
 * Return: A pointer to a new string
 */
char *argstostr(int ac, char *av[])
{
	int i, j, k;
	int l;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;
	for (i = 0; i < ac; i++)
	{
		l = l + strlen(av[i]) + 1;
	}
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
