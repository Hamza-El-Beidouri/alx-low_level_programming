#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *s;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
	i = 0;
	while (s1[i++] != '\0')
	len1++;
	}

	if (s2 != NULL)
	{
	j = 0;
	while (s2[j++] != '\0')
	len2++;
	}

	len = len1 + len2;
	s = (char *)malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	s[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
	s[i] = s2[j];
	s[len] = '\0';

	return (s);
}
