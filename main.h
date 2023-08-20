#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_c(char c);
int print_s(char *s);
ssize_t print_int(int n);
ssize_t helper(int n);

#endif /* MAIN_H */
