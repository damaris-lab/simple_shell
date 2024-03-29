#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/**
 * _strdup - returns a pointer to a dynamically allocated copy
 * of a string
 * @str: The string to copy
 *
 * Return: On success, a pointer to the duplicated string in memory
 * Otherwise NULL is returned
 */

char *_strdup(char *str)
{
	char  *strp;

	if (str == NULL)
		return (NULL);
	strp = malloc(strlen(str) + 1);
	if (strp == NULL)
		return (NULL);
	strcpy(strp, str);
	return (strp);
}
