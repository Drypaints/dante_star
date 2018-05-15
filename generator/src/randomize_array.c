/*
** EPITECH PROJECT, 2018
** generator
** File description:
** randomize_array
*/

#include <stdlib.h>

int	*randomize_array(int *array, int len)
{
	int randindex = 0;
	int intsave = 0;

	while (len > 0) {
		randindex = rand() % len;
		intsave = array[len - 1];
		array[len - 1] = array[randindex];
		array[randindex] = intsave;
		len--;
	}
	return (array);
}