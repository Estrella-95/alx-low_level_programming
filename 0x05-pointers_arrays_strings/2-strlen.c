#include "main.h"

/**
 * _strlen - length of string
 *
 * Return: void that means pour answer is correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
