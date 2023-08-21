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

int main(void)
{
    _printf("Hello, %s!\n", "World");
    return (0);
}
```

This code will print the string “Hello, World!” followed by a newline character.

## Compilation

To compile our printf function, use the following command:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89i -Wno-Format *.c

This will compile all C source files in the current directory and produce an executable file.

## Authors
Bréhyma Traoré
Emmanuel Idoko

