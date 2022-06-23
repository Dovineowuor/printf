#include "main.h"
/**
 * _printDec - Print decimal (Base 10)
 * @values: Store the value of arguments
 * Return: Counter print numbers
 */
int _printDec(va_list values)
{
	unsigned int Abs, aux, count, count2;
	int numbers;

	count = 0;

	numbers = va_arg(values, int);

	if (numbers < 0)
	{
		Abs = (numbers * -1);
		count += _putchar(45);
	}
	else
		Abs = numbers;

	aux = Abs;
	count2 = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		count2 = count2 * 10;
	}

	while (count2 >= 1)
	{
		count = count + _putchar(((Abs / count2) % 10) + '0');
		count2 = count2 / 10;
	}
	return (count);
}
/**
 * _printInt - Print the integers
 * @values: Store list numbers
 * Return: Number print
 */
int _printInt(va_list values)
{
	return (_printDec(values));
}
