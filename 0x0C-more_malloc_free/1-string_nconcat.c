#include "main.h"

/**
* string_nconcat - concatenate two strings.
* @s1: first string
* @s2: second string
* @n: number of characters to concatenate from s2
* Return: pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int s1_len = 0, s2_len = 0, i = 0, j = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[s1_len] != '\0')
s1_len++;

while (s2[s2_len] != '\0')
s2_len++;

if (n > s2_len)
n = s2_len;

concat_str = malloc((s1_len + n + 1) * sizeof(char));
if (concat_str == NULL)
return (0);


while (s1[i] != '\0')
{
concat_str[i] = s1[i];
i++;
}

while (j < n && s2[j] != '\0')
{
concat_str[i] = s2[j];
i++;
j++;
}

concat_str[i] = '\0';

return (concat_str);
}
