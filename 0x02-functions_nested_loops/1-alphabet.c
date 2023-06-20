#include "main.h"

/**
 * print_alphabet - writes alphabet in lower
 *
 * Return: On success 1.
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');

}
