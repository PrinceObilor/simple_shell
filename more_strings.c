#include "shell.h"

/**
 * _strcpy - copies a string to different destination
 * @dest: destination of string
 * @src: string source
 *
 * Return: destination value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	int length = 0;
	char *duplicate;

	while (str[i] != '\0')
	{
		duplicate[i] = str[i];
		i++;
	}

	duplicate[i] = '\0';

	return (duplicate);
}

/**
 *_puts - prints an input string
 *@str: the string to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes a character to standard output
 * @c: The character to print
 *
 * Return: On success 1 else -1
 */

int _putchar(char c)
{
	static int i;
	static char buffer[WRITE_BUFFER];

	if (c == BUFFER_FLUSH || i >= WRITE_BUFFER)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != BUFFER_FLUSH)
	{
		buffer[i++] = c;
	}
	return (1);
}
