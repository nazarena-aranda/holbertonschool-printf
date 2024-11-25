#include "main.h"
/**
 * _printf - Our printf function
 * @format: Format string containing the characters and specifiers
 * Return: The total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args; /*declaramos la lista de argumentos*/
	int i, j, count = 0; /*contar la cantidad de argumentos que nos pasen*/
	char *str, c;

	if (format == NULL) /*verificamos si format es null*/
		return (-1);
	va_start(args, format); /*inicializamos la lista de argumentos*/
	for (i = 0; format[i] != '\0'; i++) /*recorremos format*/
	{
		if (format[i] == '%') /*si encontramos un especificador*/
		{
			i = i + 1; /*nos movemos al siguiente argumento luego del especificador*/
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int); /*obtener el caracter*/
					count += write(1, &c, 1); /*count con bytes que nos devuelve write*/
					break;
				case 's': /*corroboramos si es de tipo string*/
					str = va_arg(args, char *);
					if (str == NULL) /*si la string es vacia nos devuelve error*/
						return (-1);
					for (j = 0; str[j] != '\0'; j++)
						count += write(1, &str[j], 1);
					break;
				case '%': /*corroboramos si es de tipo %*/
					count += write(1, "%", 1);
					break;
				default: /*en el caso de que no sea ninguno de los que queremos, error*/
					return (-1);
			}
		}
		else
			count += write(1, &format[i], 1);
		va_end(args);
	}
	return (count);
}
