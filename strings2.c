#include "main.h"

/**
 * _strcat - concatunate two strings
 * @str1: the first string to be concatunated
 * @str2: the second string to be concatunated
 * Return: str1
*/

char *_strcat(char *str1, const char *str2)
{
	int len1;
	int len2;

	for (len1 = 0; str1[len1] != '\0'; len1++)
		;
	for (len2 = 0; str2[len2] != '\0'; len2++)
	{
		str1[len1] = str2[len2];
		len1++;
	}
	str1[len1] = '\0';
	return (str1);
}

/**
 * _strcpy - copy the character of string to another
 * @str1: the string to copy in
 * @str2: the string to copy from
 * Return: str1
*/

char *_strcpy(char *str1, char *str2)
{
	size_t index;

	for (index = 0; str2[index] != '\0'; index++)
	{
		str1[index] = str2[index];
	}
	str1[index] = '\0';
	return (str1);
}

/**
 * _strchr - find the character of a string
 * @str: the string to find the character from
 * @s: the character
 * Return: 0
*/

char *_strchr(char *str, char s)
{
	unsigned int index;

	for (index = 0; *(str + index) != '\0'; index++)
		if (*(str + index) == s)
			return (str + index);
	return ('\0');
}

/**
 * _strcspn - convert character in the string
 * @str: the first string
 * @r: the second string
 * Return: num
*/

size_t _strcspn(const char *str, const char *r)
{
	size_t num = 0;
	const char *str1;
	const char *str2;

	for (str1 = str; *str1 != '\0'; ++str1)
	{
		for (str2 = r; *str2 != '\0'; ++str2)
		{
			if (*str1 == *str2)
			{
				return (num);
			}
		}
		++num;
	}
	return (num);
}
