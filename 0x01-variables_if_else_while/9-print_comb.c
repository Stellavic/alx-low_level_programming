#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	
	for (a =0; a < 100; a++)
	{
	putchara(a + '0');
	if (a < 99)
	{
	putchar(a + '0');
	putchar(',');
	putchar(' ');
	}
	}
        putchar('\n');

	return (0);
}
	
