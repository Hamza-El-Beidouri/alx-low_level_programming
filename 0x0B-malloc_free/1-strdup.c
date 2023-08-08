#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copyarray;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str != '\0')
		j++;

	copyarray = (char *)malloc((sizeof(char) * j) + 1);
	if (copyarray == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		copyarray[i] = str[i];
	copyarray[j] = '\0';

	return (copyarray);
}
