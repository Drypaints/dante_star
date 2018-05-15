/*
** EPITECH PROJECT, 2018
** generator
** File description:
** display_maze
*/

#include <stdlib.h>
#include <unistd.h>

void	display_maze(char **maze, int wid, int len)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < len; i++) {
		for (j = 0; j < wid; j++) {
			write(1, &maze[j][i], 1);
		}
		if (i < len - 1) {
			write(1, "\n", 1);
		} else {
			write(1, "\0", 1);
		}
	}
}
