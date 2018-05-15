/*
** EPITECH PROJECT, 2018
** generator
** File description:
** change_maze
*/

#include "main.h"

static void	replace_labels_x_by_y(int **label_array, int x, int y,
coord_t mz_size)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < mz_size.x; i++) {
		for (j = 0; j < mz_size.y; j++) {
			if (label_array[i][j] == x) {
				label_array[i][j] = y;
			}
			else {
			}
		}
	}
}

int	change_above(char **maze, int **label_array, coord_t current,
coord_t mz_size)
{
	int res = 0;

	if (current.y > 1
	&& maze[2 * current.x][2 * current.y - 1] == 'X'
	&& label_array[current.x][current.y] !=
	label_array[current.x][current.y - 1]) {
		replace_labels_x_by_y(label_array,
		label_array[current.x][current.y],
		label_array[current.x][current.y - 1], mz_size);
		maze[2 * current.x][2 * current.y - 1] = '*';
		maze[2 * current.x][2 * current.y] = '*';
		res = 1;
	}
	else {
		res = 0;
	}
	return (res);
}

int	change_under(char **maze, int **label_array, coord_t current,
coord_t mz_size)
{
	int res = 0;

	if (current.y + 1 < mz_size.y
	&& maze[2 * current.x][2 * current.y + 1] == 'X'
	&& label_array[current.x][current.y] !=
	label_array[current.x][current.y + 1]) {
		replace_labels_x_by_y(label_array,
		label_array[current.x][current.y],
		label_array[current.x][current.y + 1], mz_size);
		maze[2 * current.x][2 * current.y + 1] = '*';
		maze[2 * current.x][2 * current.y] = '*';
		res = 1;
	}
	else {
		res = 0;
	}
	return (res);
}

int	change_rside(char **maze, int **label_array, coord_t current,
coord_t mz_size)
{
	int res = 0;

	if (current.x + 1 < mz_size.x
	&& maze[2 * current.x + 1][2 * current.y] == 'X'
	&& label_array[current.x][current.y] !=
	label_array[current.x + 1][current.y]) {
		replace_labels_x_by_y(label_array,
		label_array[current.x][current.y],
		label_array[current.x + 1][current.y], mz_size);
		maze[2 * current.x + 1][2 * current.y] = '*';
		maze[2 * current.x][2 * current.y] = '*';
		res = 1;
	}
	else {
		res = 0;
	}
	return (res);
}

int	change_lside(char **maze, int **label_array, coord_t current,
coord_t mz_size)
{
	int res = 0;

	if (current.x > 1
	&& maze[2 * current.x - 1][2 * current.y] == 'X'
	&& label_array[current.y][current.x] !=
	label_array[current.x - 1][current.y]) {
		replace_labels_x_by_y(label_array,
		label_array[current.x][current.y],
		label_array[current.x - 1][current.y], mz_size);
		maze[2 * current.x - 1][2 * current.y] = '*';
		maze[2 * current.x][2 * current.y] = '*';
		res = 1;
	}
	else {
		res = 0;
	}
	return (res);
}
