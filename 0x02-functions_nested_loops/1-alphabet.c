#include "main.h"

/**
 * print alphabet - in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
