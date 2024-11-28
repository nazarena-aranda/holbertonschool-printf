# _printf Project

## Description

`_printf` is our custom implementation of the standard C library function `printf`. This function produces formatted output based on a format string and handles conversion specifiers for characters, strings, the percentage sign (%), and decimal numbers.

### Our implementation includes:
- Handling of variable numbers of arguments using variadic functions.
- Writing output directly to the standard output using the `write` system call.
- Handling special cases such as the minimum value of an integer (`INT_MIN`).
- Supporting basic format specifiers such as `%c`, `%s`, `%d`, `%i`, and `%%`.

## Features

- Prints formatted strings to the standard output using the `write` system call.
- Supports the following conversion specifiers:
  - **%c**: Prints a single character, using the `print_char` function.
  - **%s**: Prints a string of characters, using the `print_str` function.
  - **%%**: Prints a percentage sign.
  - **%d / %i**: Prints a decimal number, using the `print_num` function. Handles both positive and negative numbers, including `INT_MIN`.
- Handles special cases for null strings and minimum integer values.


## Implementation Details

The `_printf` function uses several important concepts and techniques:

- **Variadic Functions**: We use variadic functions to handle a variable number of arguments. We include `<stdarg.h>` to manage the arguments, utilizing macros like `va_start`, `va_arg`, and `va_end` to traverse the argument list.
- **Function Calls**: The `_printf` function makes use of helper functions to handle specific format specifiers. Each specifier (e.g., `%c`, `%s`, `%d`) is processed by calling the appropriate helper function.
- **Write System Call**: We use the `write` system call to output characters to the standard output.
- **Constant Variables**: Constant variables are used where applicable to ensure that values do not change unexpectedly during execution.

## Return Value

The `_printf` function returns the total number of characters printed, excluding the null byte at the end of strings.

## Flowchart

Below is a flowchart depicting the flow of execution for the `_printf` function:

![Flowchart](https://github.com/nazarena-aranda/Images/blob/main/FlowchartPrintf.drawio.png?raw=true)

## Files in this Repository

### main.h
Header file containing:
- Function prototypes for `_printf` and helper functions (`print_char`, `print_str`, `print_num`).
- Necessary libraries and macro definitions for special values like `INT_MIN`.

### printf.c
Core implementation of the `_printf` function.
- Contains the main loop that parses the format string and handles conversion specifiers using a switch statement.
- Utilizes helper functions to process specific specifiers (`%c`, `%s`, `%d`, `%i`, `%%`).

### all_functions.c
Contains auxiliary functions used by `_printf`:
- **print_char**: Prints a single character to the standard output.
- **print_str**: Prints a string of characters to the standard output, handling null pointers.
- **print_num**: Prints an integer to the standard output, managing negative numbers and the special case of `INT_MIN`.

### man_3_printf
Manual page for `_printf`.
- Provides detailed documentation about the usage, options, and examples of `_printf`.
- Includes a synopsis, description, and supported specifiers.

### main.c
Test file containing sample cases to verify `_printf` functionality.
- Includes various scenarios for `%c`, `%s`, `%d`, `%i`, `%%`, etc.

## Examples of Usage

Basic usage:
```
_printf("String:[%s]\n", "I am a string!");
_printf("Character:[%c]\n", 'H');
_printf("Percent:[%%]\n");
_printf("Negative:[%d]\n", -762534);
_printf("Minimum Integer:[%d]\n", INT_MIN);
```
Output:
```
String:[I am a string!] Character:[H] Percent:[%] Negative:[-762534] Minimum Integer:[-2147483648]
```
## Conversion Specifiers Supported
- **%c**: Prints a single character. Implemented in `print_char` using the `write` system call.
- **%s**: Prints a string of characters. Implemented in `print_str` and handles null strings by returning an error.
- **%%**: Prints a percentage sign. Handled directly within `_printf`.
- **%d / %i**: Prints a decimal number. Implemented in `print_num`, handling both positive and negative numbers, and the special case for `INT_MIN`.

## Authors

- **Nazarena Aranda** - **Kevin Acosta** - **Luciana Diaz**
