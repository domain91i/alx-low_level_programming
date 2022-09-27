#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints a hexadecimal string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = '0'; low <= '9'; low++)
	{	
		putchar(low);
	} 

	for (low = 'a'; low <= 'f'; low++)
	{	
		putchar(low);
        }

	putchar('\n');

	return (0);
}
