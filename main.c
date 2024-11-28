#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Character: %c\n", 'A');
	_printf("String: %s\n", "Hello, World!");
	_printf("Percent: %%\n");
	_printf("Just a plain string.\n");
	_printf("Char: %c, String: %s\n", 'B', "Another String");
	_printf("Two chars: %c %c\n", 'X', 'Y');
	_printf("Two strings: %s and %s\n", "First", "Second");
	_printf("Percent 1: %% Percent 2: %%\n");
	_printf("Null char: %c\n", '\0');
	_printf("Null string: %s\n", (char *)NULL);
	_printf("");
	_printf("Only percent: %");
	_printf("Unsupported specifier: %x\n");
	_printf("Start %s end.\n", "middle");
	_printf("Char: %c, String: %s, Percent: %%\n", 'Z', "Test String");
	_printf("Char: %c, String: %s, Percent: %%\n", 'Z', "Test String");
	_printf("Consecutive: %c%s\n", 'A', "B");
	_printf("This is a very long text to test the implementation: %s\n", "Long String Test");
return(0);
}
