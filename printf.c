#include "main.h"
/**
 * _printf - Our printf function
 * @format: Format string containing the characters and specifiers
 * Return: The total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args; /*declaramos la lista de argumentos*/
	int i, count = 0; /*contar la cantidad de argumentos que nos pasen*/

	if (format == NULL) /*verificamos si format es null*/
		return (-1);
	va_start(args, format); /*inicializamos la lista de argumentos*/
	for (i = 0; format[i] != '\0'; i++) /*recorremos format*/
	{
		if (format[i] == '%') /*si encontramos un especificador*/
		{
			i++; /*nos movemos al siguiente argumento luego del especificador*/
			switch (format[i])
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's': /*corroboramos si es de tipo string*/
					count += print_str(va_arg(args, char *));
					break;
				case '%': /*corroboramos si es de tipo %*/
					count += write(1, "%", 1);
					break;
					/*en los casos de abajo corroboramos que sea un num*/
				case 'd':
				case 'i':
					count += print_num(va_arg(args, int));
					break;
				default: /*en el caso de que no sea ninguno de los que queremos, error*/
					return (-1);
			}
		}
		else
			count += write(1, &format[i], 1);
		va_end(args);
	}`
	return (count);
}
