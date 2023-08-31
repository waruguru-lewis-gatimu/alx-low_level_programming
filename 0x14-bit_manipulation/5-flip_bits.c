#include "main.h"

/**
 * flip_bits - this counts the number of bits to change
 * to get from one number to another
 * @l: the first number
 * @g: the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int l, unsigned long int g)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = l ^ g;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
