#include "main.h"
/**
 * _printf - main function to print in console
 * @format: array to print and check type
 * Return: count of character printed
 **/
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list values;
		int (*savef)(va_list);

		va_start(values, format);
		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count = count + _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					savef = get_func(format[i + 1]);
					if (savef)
						count = count + savef(values);
					else
						count += _putchar(format[i]) + _putchar(format[i + 1]);
					i++;
				}
			}
			else
				count = count + _putchar(format[i]);
		}
		va_end(values);
	}
return (count);
}
