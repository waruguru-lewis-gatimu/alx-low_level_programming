#include "main.h"

/**
 * get_bit - this returns the value of a bit at an index in a decimal number
 * @l: the number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int l, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (l >> index) & 1;

	return (bit_val);
}
