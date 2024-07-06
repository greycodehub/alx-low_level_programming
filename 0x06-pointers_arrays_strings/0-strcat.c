#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: An input destination string
 * @src: An input source string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *swap = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (swap);
}
