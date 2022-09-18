#include <stdio.h>
#include "main.h"

/**
*main - print numbers 1 - followed by a new line
* numbers that are multiples of 3 print fizz
* numbers that are multiples of 5 print buzz
* numbers that are multiples of 3 n 5 print fizzbuzz
* each number and word to be separated by space
*
* Return: always 0 (Success)
*/

int main(void)
{
	int num;

for (num = 1; num <= 100; ++num)
{
if (num % 3 == 0 && !(num % 5 == 0))
printf("FizzBuzz")
else
printf("%d", num);

if (num != 100)
printf(" ");
else
printf("\n");
}
