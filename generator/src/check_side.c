/*
** EPITECH PROJECT, 2018
** generator
** File description:
** check_side
*/

#include "main.h"

int	check_above(maze_t *maze, coord_t *pos)
{
	if (pos->y == 0) {
		return (0);
	}
	else if (maze->maze[pos->x][pos->y - 2] == VISITED
	|| maze->maze[pos->x][pos->y - 2] == SPACE) {
		return (0);
	}
	else {
		maze->maze[pos->x][pos->y - 2] = VISITED;
		maze->maze[pos->x][pos->y - 1] = SPACE;
		pos->y -= 2;
		return (1);
	}
}

int	check_under(maze_t *maze, coord_t *pos)
{
	if (pos->y + 2 >= maze->width) {
		return (0);
	}
	else if (maze->maze[pos->x][pos->y + 2] == VISITED
	|| maze->maze[pos->x][pos->y + 2] == SPACE) {
		return (0);
	}
	else {
		maze->maze[pos->x][pos->y + 2] = VISITED;
		maze->maze[pos->x][pos->y + 1] = SPACE;
		pos->y += 2;
		return (1);
	}
}

int	check_lside(maze_t *maze, coord_t *pos)
{
	if (pos->x == 0) {
		return (0);
	}
	else if (maze->maze[pos->x - 2][pos->y] == VISITED
	|| maze->maze[pos->x - 2][pos->y] == SPACE) {
		return (0);
	}
	else {
		maze->maze[pos->x - 2][pos->y] = VISITED;
		maze->maze[pos->x - 1][pos->y] = SPACE;
		pos->x -= 2;
		return (1);
	}
}

int	check_rside(maze_t *maze, coord_t *pos)
{
	if (pos->x + 2 >= maze->length) {
		return (0);
	}
	else if (maze->maze[pos->x + 2][pos->y] == VISITED
	|| maze->maze[pos->x + 2][pos->y] == SPACE) {
		return (0);
	}
	else {
		maze->maze[pos->x + 2][pos->y] = VISITED;
		maze->maze[pos->x + 1][pos->y] = SPACE;
		pos->x += 2;
		return (1);
	}
}
