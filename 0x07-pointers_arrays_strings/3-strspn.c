#include "main.h"
/**
 * * _strspn - return length of string that resembles values coreectly
 * * @s: string to search and the initial segment
 * * @accept: target values which consist only of bytes ...
 * * Return: number of bytes targeted in values
 */

unsigned int _strspn(char *s, char *accept)
{
		int number_i = 0, k;
			int values = 0;

			while (s[number_i] != '\0') /*iterate in string*/
			{

				for (k = 0; accept[k] != '\0'; k++) /*iterate through target*/
				{
					if (s[number_i] == accept[k]) /*record & break at first val*/
					{
						values++;
						break;
					}
					if (accept[k + 1] == '\0' && s[number_i] != accept[k])

						return (values);/*return if idx doesn't match*/
				}

				number_i++;
			}

			return (values); /* return val if all are correct till end */

}
