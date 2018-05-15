/*
** EPITECH PROJECT, 2018
** generator
** File description:
** safe_malloc
*/

#include <stdlib.h>
#include "error.h"

void	*safe_malloc(size_t size)
{
	void	*ptr = malloc(size);

	if (ptr == NULL) {
		display_error();
	}
	else {
	}
	return (ptr);
}

void	**alloc_2d_array(int x, int y, size_t size)
{
	void **ptr = safe_malloc((x + 1) * sizeof(void *));
	int cnt = 0;

	ptr[x] = NULL;
	while (cnt < x) {
		ptr[cnt] = safe_malloc(y * size);
		cnt++;
	}
	return (ptr);
}

int	free_2d_charray(void **array)
{
	int cnt = 0;

	if (array != NULL) {
		while (array[cnt] != NULL) {
			free(array[cnt]);
			cnt++;
		}
		free(array);
	}
	else {
	}
	return (0);
}

int	free_2d_intarray(int **array)
{
	int cnt = 0;

	if (array != NULL) {
		while (array[cnt] != NULL) {
			free(array[cnt]);
			cnt++;
		}
		free(array);
	}
	else {
	}
	return (0);
}
