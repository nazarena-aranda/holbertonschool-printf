# _printf Project

## Description:

`_printf` is our custom implementation of the standard C library function `printf`. This function produces formatted output based on a format string and handles conversion specifiers for characters, strings, the percentage sign (`%`), and decimal numbers.

### Features:
- Prints formatted strings to the standard output.
- Supports the following conversion specifiers:
  - **`%c`**: Prints a single character.
  - **`%s`**: Prints a string of characters.
  - **`%%`**: Prints a percentage sign.
  - **`%d`**: Prints a number.
  - **`%i`**: Prints a number.

---

## Files in this repository:

### 1. `main.h`
- Header file containing:
  - Function prototypes for `_printf` and helper functions.
  - Necessary libraries.

### 2. `printf.c`
- Core implementation of the `_printf` function.
- Contains the main loop that parses the format string and handles conversion specifiers.
- Utilizes helper functions to process specific specifiers.

### 3. `all_functions.c`
- Contains auxiliary functions used by `_printf`, such as:
  - A function to print characters.
  - A function to print strings.
  - A function to print numbers.

### 4. `man_3_printf`
- Manual page for `_printf`.
- Provides detailed documentation about the usage, options, and examples of `_printf`.
- Includes a synopsis, description, and supported specifiers.

### 5. `main.c`
- Test file containing sample cases to verify `_printf` functionality.
- Includes various scenarios for `%c`, `%s`, `%d`, `%i`, `%%`, etc.

---

## How to compile:
To compile the project, use the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

---

## Examples of usage:

### Basic usage:
```
_printf("String:[%s]\n", "I am a string !");
_printf("Character:[%c]\n", 'H');
_printf("Percent:[%%]\n");
_printf("Negative:[%d]\n", -762534);
```
**Output:**
```
String:[I am a string !]
Character:[H]
Percent:[%]
Negative:[-762534]
```

---

## Requirements:

### General:
- Allowed editors: `vi`, `vim`, `emacs`.
- All files must be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line.
- A `README.md` file at the root of the project is mandatory.
- Code must follow the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- Global variables are not allowed.
- Maximum of 5 functions per file.
- The provided `main.c` files are examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, they won’t be considered). We will use our own `main.c` files during compilation.
- The prototypes of all your functions must be included in a header file called `main.h`.
- Don’t forget to push your header file.
- All header files must be include-guarded.
- Note: We will not provide the `_putchar` function for this project.

---

## Authors:
- **Nazarena Aranda**
- **Kevin Acosta**
- **Lucy Nazarenna**
