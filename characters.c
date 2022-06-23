#include "main.h"

/**
 * _printChar - Print
 * @values: Store the a list of characters
 * Return: num of parameters printed
 */
int _printChar(va_list values)
{
	int c = va_arg(values, int);

	return (_putchar(c));
}

/**
 * _printString - print string
 * @values: Store the a list of characters
 * Return: num of parameters printed
 */
int _printString(va_list values)
{
	int i, count = 0;
	char *str;

	str = va_arg(values, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
