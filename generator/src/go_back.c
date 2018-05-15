/*
** EPITECH PROJECT, 2018
** generator
** File description:
** go_back
*/

#include "main.h"

static int	go_back_up(maze_t *maze, coord_t *pos)
{
	if (pos->y == 0) {
		return (0);
	}
	else if ((maze->maze[pos->x][pos->y - 2] == VISITED
	&& maze->maze[pos->x][pos->y - 1] != WALL)) {
		maze->maze[pos->x][pos->y] = SPACE;
		pos->y -= 2;
		return (1);
	}
	else {
		return (0);
	}

	return (0);
}

static int	go_back_dw(maze_t *maze, coord_t *pos)
{
	if (pos->y + 2 >= maze->width) {
		return (0);
	}
	else if (maze->maze[pos->x][pos->y + 2] == VISITED
	&& maze->maze[pos->x][pos->y + 1] != WALL) {
		maze->maze[pos->x][pos->y] = SPACE;
		pos->y += 2;
		return (1);
	}
	else {
		return (0);
	}
}

static int	go_back_lf(maze_t *maze, coord_t *pos)
{
	if (pos->x == 0) {
		return (0);
	}
	else if (maze->maze[pos->x - 2][pos->y] == VISITED
	&& maze->maze[pos->x - 1][pos->y] != WALL) {
		maze->maze[pos->x][pos->y] = SPACE;
		pos->x -= 2;
		return (1);
	}
	else {
		return (0);
	}

	return (0);
}

static int	go_back_rg(maze_t *maze, coord_t *pos)
{
	if (pos->x + 2 >= maze->length) {
		return (0);
	}
	else if (maze->maze[pos->x + 2][pos->y] == VISITED
	&& maze->maze[pos->x + 1][pos->y] != WALL) {
		maze->maze[pos->x][pos->y] = SPACE;
		pos->x += 2;
		return (1);
	}
	else {
		return (0);
	}
}

int	go_back(maze_t *maze, coord_t *pos)
{
	if (go_back_up(maze, pos)
	|| go_back_dw(maze, pos)
	|| go_back_lf(maze, pos)
	|| go_back_rg(maze, pos)) {
		return (1);
	}
	else {
		return (0);
	}
}