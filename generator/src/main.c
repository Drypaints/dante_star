/*
** EPITECH PROJECT, 2018
** generator
** File description:
** main
*/

#include <time.h>
#include "gen_maze.h"
#include "alloc.h"
#include "error.h"
#include "main.h"

int main(int ac, char **av)
{
	char **maze = NULL;

	srand(time(NULL));
	check_error(ac, av);
	maze = gen_maze(ac, av);
	display_maze(maze, atoi(av[1]), atoi(av[2]));
	free_2d_charray(maze);
	return (0);
}
