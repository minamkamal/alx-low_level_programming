#include "main.h"

/**
 * _atoi - convert string to numbers
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s && (*s < '0' || *s > '9')) {
		if (*s == '-') {
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9') {
		result = result * 10 + (*s - '0');
		s++;
	}

	return result * sign;
}
