# ALX printf Project

## Description

This repository contains our implementation of the `printf` function in C as part of the ALX School curriculum. Our `printf` function is capable of handling the following format specifiers:

- `%c`: Prints a single character.
- `%s`: Prints a string of characters.
- `%d`: Prints an integer in decimal format.
- `%i`: Prints an integer in decimal format.
- `%%`: Prints a percent sign.

## Usage

To use our `printf` function, include the header file `main.h` in your C source code and call the `_printf` function with the desired format string and arguments. For example:

```c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int len;
int len2;
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", INT_MIN);
printf("Negative:[%d]\n", INT_MIN);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", NULL);
printf("String:[%s]\n", NULL);
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
return (0);
}
