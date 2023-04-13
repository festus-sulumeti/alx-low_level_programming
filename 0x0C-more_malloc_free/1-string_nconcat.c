#include "main.h"

/**
* string_nconcat - concat 2 strings.
* @s1:  string 1
* @s2: string 2
* @n: no of  chars 2 concatenate from s2
* Return: char pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int size_s1 = 0, size_s2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	do {
		size_s1++;
	} while (s1[size_s1 - 1] != '\0');

	do {
		size_s2++;
	} while (s2[size_s2 - 1] != '\0');

	if (n > size_s2)
		n = size_s2;

	result = malloc((size_s1 + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	do {
		result[i] = s1[i];
		i++;
	} while (i < size_s1);

	do {
		result[i] = s2[j];
		i++;
		j++;
	} while (j < n);

	result[i] = '\0';

	return (result);
}
