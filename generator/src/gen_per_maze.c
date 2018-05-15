/*
** EPITECH PROJECT, 2018
** generator
** File description:
** gen_per_maze
*/

#include <string.h>
#include <unistd.h>
#include <time.h>
#include "main.h"
#include "alloc.h"

static void	set_grid_walls(char **maze, int height)
{
	int cnt = 0;

	if (maze != NULL) {
		while (maze[cnt] != NULL) {
			memset(maze[cnt], WALL, height);
			cnt++;
		}
	}
	else {
	}
}

int	check_cell(maze_t *maze, coord_t *pos, int dir)
{
	switch (dir) {
		case DIR_UP:
			return (check_above(maze, pos));
		case DIR_DW:
			return (check_under(maze, pos));
		case DIR_LF:
			return (check_lside(maze, pos));
		case DIR_RG:
			return (check_rside(maze, pos));
		default:
			return (0);
	}
}

static void	remove_useless_walls(char **maze, int width, int length)
{
	if (width % 2 == 0 && length % 2 == 0) {
		maze[width - 1][length - 1] = SPACE;
		maze[width - 1][length - 2] = SPACE;
	}
	else if (width % 2 == 0 || length % 2 == 0) {
		maze[width - 1][length - 1] = SPACE;
	}
}

static void	recursive_backtracker(maze_t *maze, coord_t *pos)
{
	int directions[4] = {DIR_DW, DIR_LF, DIR_RG, DIR_UP};

	randomize_array(directions, 4);
	if (check_cell(maze, pos, directions[0])
	|| check_cell(maze, pos, directions[1])
	|| check_cell(maze, pos, directions[2])
	|| check_cell(maze, pos, directions[3])) {
	}
	else {
		(go_back(maze, pos));
	}
}

char	**gen_per_maze(int wid, int len)
{
	char **mazestring = (char **)alloc_2d_array(wid, len, sizeof(char));
	coord_t pos = {0, 0};
	maze_t *maze = safe_malloc(sizeof(maze_t));

	maze->maze = mazestring;
	maze->length = wid;
	maze->width = len;
	set_grid_walls(maze->maze, len);
	maze->maze[0][0] = VISITED;
	do {
		recursive_backtracker(maze, &pos);
	} while (pos.x != 0 || pos.y != 0);
	maze->maze[0][0] = SPACE;
	remove_useless_walls(mazestring, wid, len);
	free(maze);
	return (mazestring);
}
