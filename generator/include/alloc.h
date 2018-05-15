/*
** EPITECH PROJECT, 2018
** generator
** File description:
** alloc
*/

#ifndef ALLOC_H
#define ALLOC_H

#include <stdlib.h>

int	free_2d_charray(char **array);

int	free_2d_intarray(int **array);

void	**alloc_2d_array(int x, int y, size_t size);

void	*safe_malloc(size_t size);

#endif
