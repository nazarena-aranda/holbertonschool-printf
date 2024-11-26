#include "main.h"
#include <unistd.h>
/**
 * print_num - Print format number
 * @n: Num
 * Return: Total number
 */
int print_num(int n)
{
	int i = 0, total = 0;
	int j;
	char buffer[11];

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		total++;
		if (n == -2147483648)
		{
			write(1, "2147483648", 10); /*caso especial para un int */
			return (total + 10);
		}
		n = -n; /* convierte a positivo */
	}
	while (n > 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}
	for (j = i - 1; j >= 0; j--) /* escribe los digitos en orden mayor a menor */
	{
		write(1, &buffer[j], 1);
		total++;
	}
	return (total);
}
