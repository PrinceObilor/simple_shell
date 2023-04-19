#include "simple_shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 * Return: length of string else 0
 */

int _strlen(char *s)
{
	int length = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (*s++)
	{
		length++;
	}

	return (i);
}

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: -1 if s1 < s2, 1 if s1 > s2, 0 if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
	{
		return (-1);
	}
	else if (*s1 > *s2)
	{
        	return (1);
	}

	return (0);
}

/**
 * _strcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated strings
 */

char *_strcat(char *s1, char *s2)
{
	char *result;
	while (*s1)
	{
		*result = *s1
		s1++;
		result++;
	}
	while (*s2)
	{
		*result = *s2;
		s1++;
		result++;
	}
	*result = '\0';

	return (result);
}
