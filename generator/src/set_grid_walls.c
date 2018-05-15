/*
** EPITECH PROJECT, 2018
** generator
** File description:
** set_grid_walls
*/

#include <string.h>

void	set_grid_walls(char **maze, int width)
{
	int cnt = 0;

	if (maze != NULL) {
		while (maze[cnt] != NULL) {
			memset(maze[cnt], 'X', width);
			cnt++;
		}
	}
	else {
	}
}
