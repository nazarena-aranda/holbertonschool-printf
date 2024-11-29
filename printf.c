#include "main.h"
/**
 * _printf - Our printf function
 * @format: Format string containing the characters and specifiers
 * Return: The total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args; /*declaramos la lista de argumentos*/
	int i, count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format); /*inicializamos la lista de argumentos*/
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			/*Procesamos segun el tipo de especificador*/
			switch (format[i])
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's':
					count += print_str(va_arg(args, char *));
					break;
				case '%':
					count += write(1, "%", 1);
					break;
				case 'd':
				case 'i':
					count += print_num(va_arg(args, int));
					break;
				default:
					count += write(1, "%", 1);
					count += write(1, &format[i], 1);
			}
		}
		else
			count += write(1, &format[i], 1);
	}
	va_end(args);
	return (count);
}
