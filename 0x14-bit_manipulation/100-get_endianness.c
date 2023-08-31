#include "main.h"

/**
 * get_endianness - used to check if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *w = (char *) &i;

	return (*w);
}
