#include "main.h"

/**
 * clear_bit - this sets the value of a given bit to 0
 * @l: a pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *l, unsigned int index)
{
	if (index > 63)
		return (-1);

	*l = (~(1UL << index) & *l);
	return (1);
}
