#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: The character string
 * Return: The len of the characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, len = 0;
	char *str;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			len += write(STDOUT_FILENO, &format[i], 1);
			continue;
		}
		i++;
		switch (format[i])
		{
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					len += write(STDOUT_FILENO, "(null)", 6);
				else
					len += print_s(str);
					

				break;
			case 'c':
				len += (char)print_c(va_arg(ap, int));
				break;
			case 'd':
			case 'i':
				len += print_int(va_arg(ap, int));
				break;
			case '%':
				len += write(STDOUT_FILENO, "%", 1);
				break;
			default:
				len += write(STDOUT_FILENO, "%%", 1);
				len += write(STDOUT_FILENO, &format[i], 1);
				break;
		}
	}
	va_end(ap);
	return (len);
}
