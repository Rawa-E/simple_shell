#include "main.h"

/**
 * _strcmp - comparing two strings
 * @str1: the first string
 * @str2: the second string
 * Return: the difference between two strings
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

/**
 * _strdup - duplcate the string
 * @str: the string to be duplcated
 * Return: n
 */

char *_strdup(char *str)
{
	char *n;
	int i, j = 0;

	if (str == 0)
		return (NULL);

	while (str[j])
		j++;
	n = malloc((j + 1) * sizeof(char));

	for (i = 0; i <= j; i++)
		n[i] = str[i];
	while (i <= j)
		n[i] = str[i];

	return (n);
}

/**
 * _strlen - measurse the lenght of the string
 * @str: the string to be measursed
 * Return: i
 */
unsigned int _strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
