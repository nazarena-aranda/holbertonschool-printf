#include "main.h"
/**
 * print_char - Print format char
 * @c: Character to print
 * Return: character
 */

int print_char(char c)
{
	int count = 0;

	if (c)
	{
		write(1, &c, 1);
		count++;
	}
	return (count);
}

/**
 * print_str - Print format string
 * @str: String to print
 * Return: Total of characteres of the string
 */

int print_str(char *str)
{
	int j, count = 0;

	if (str == NULL) /*si la string es vacia nos devuelve error*/
		return (-1);

	for (j = 0; str[j] != '\0'; j++)
	{
		count++;
		write(1, &str[j], 1);
	}
	return (count);
}
