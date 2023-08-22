#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_c(char c);
int print_s(char *s);
ssize_t print_int(int n);
ssize_t helper(int n);
int print_b(int decimal);

#endif /* MAIN_H */
