#include "main.h"
/**
 * print_char - Print format char
 * @c: Character to print
 * Return: character
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_str - Print format string
 * @str: String to print
 * Return: Total of characteres of the string
 */

int print_str(char *str)
{
	/*Comprueba si el puntero str es NULL. Si lo es, devuelve error*/
	int j, count = 0;

	if (str == NULL)
		return (write(1, "(null)", 6));
	for (j = 0; str[j] != '\0'; j++)
	{
		count++;
		write(1, &str[j], 1);
	}
	return (count);
}

#define INT_MIN -2147483648
#define INT_MIN_STR "2147483648"
#define INT_MIN_STR_LEN 10

/**
 * print_num - Print format number
 * @n: Number to print
 * Return: Total number of characters printed
 */
int print_num(int n)
{
	char buffer[11]; /* Buffer para almacenar los caracteres del número */
	int i = 0, total = 0; /* Iterar y contar los caracteres de n */

	/* Caso especial para el 0 */
	if (n == 0)
	{
		return (write(1, "0", 1));
	}

	/* Caso especial para INT_MIN */
	if (n == INT_MIN)
	{
		write(1, "-", 1);
		write(1, INT_MIN_STR, INT_MIN_STR_LEN);
		return (1 + INT_MIN_STR_LEN);
	}

	/* Manejo de números negativos */
	if (n < 0)
	{
		total += write(1, "-", 1);
		n = -n;
	}

	/* Convertir el número a una cadena en el buffer */
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	/* Escribir el contenido del buffer en orden inverso */
	while (i > 0)
	{
		total += write(1, &buffer[--i], 1);
	}

	return (total);
}

