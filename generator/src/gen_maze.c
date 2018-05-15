/*
** EPITECH PROJECT, 2018
** generator
** File description:
** gen_maze
*/

#include <stdlib.h>
#include "error.h"
#include "gen_maze.h"

char	**gen_maze(int ac, char **av)
{
	char **maze = NULL;

	if (ac == 3 && av != NULL) {
		maze = gen_imp_maze(atoi(av[1]), atoi(av[2]));
	}
	else if (ac == 4 && av != NULL) {
		maze = gen_per_maze(atoi(av[1]), atoi(av[2]));
	}
	else {
		display_error();
	}
	return (maze);
}
