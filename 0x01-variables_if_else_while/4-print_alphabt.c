#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != e && i != q)
		putchar(i);
	}
	putchar('\n');
	return (0);
}
