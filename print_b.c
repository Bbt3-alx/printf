#include "main.h"

/**
 * print_b - print the binary number of a decimal
 * @decimal: The number to be converted into decimal
 * Return: The number of bit printed.
 */

int print_b(int decimal)
{
	int bit_count = 0;
	int binary[32];
	int i, index = 0;
	char binary_char;

	if (decimal == 0)
	{
		bit_count += write(STDOUT_FILENO, "0", 1);
		return (bit_count);
	}
	while (decimal > 0)
	{
		binary[index++] = decimal % 2;
		decimal /= 2;
	}

	for (i = index - 1; i >= 0; i--)
	{
		binary_char = binary[i] + '0'; /* Convert digit to char */
		bit_count += write(STDOUT_FILENO, &binary_char, 1);
	}
	return (bit_count);
}
