#include "main.h"

/**
 * binary_to_uint - this converts a binary number to unsigned int
 * @l: the string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *l)
{
	int i;
	unsigned int dec_val = 0;

	if (!l)
		return (0);

	for (i = 0; l[i]; i++)
	{
		if (l[i] < '0' || l[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (l[i] - '0');
	}

	return (dec_val);
}
