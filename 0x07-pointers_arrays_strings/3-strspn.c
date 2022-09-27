#include "main.h"
#include <stdio.h>
/**
 * _strpn - gets lengthof a prefix substring
 * @s: initial segment.
 * @accept: accept bytes.
 *
 * Return: the number of accepted bytes.
 */
unsigned int _strpn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = l;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == l)
			break;
	}
	return (i);
}
