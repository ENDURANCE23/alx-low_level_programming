#include "main.h"

/**
* _memset - fils a memory block with a constant byte
* @s: char to be used in n
* @b: number of bytes to be used
*
* Return: pointer to the memory block
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
	}
	return (s);
}
