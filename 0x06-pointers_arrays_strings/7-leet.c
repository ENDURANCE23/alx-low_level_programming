#include "main.h"

/**
 * leet - leet encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 *
 */
char *leet(char *str)
{

	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (str);
}
