/*
** EPITECH PROJECT, 2018
** generator
** File description:
** gen_imp_maze
*/

#include <string.h>
#include "alloc.h"
#include "main.h"

char	**gen_imp_maze(int wid, int len)
{
	char **maze = gen_per_maze(wid, len);
	int cnt = (wid * len) / 5;
	int r_wid = 0;
	int r_len = 0;

	while (cnt > 0) {
		r_wid = rand() % wid;
		r_len = rand() % len;
		if (maze[r_wid][r_len] == WALL) {
			maze[r_wid][r_len] = SPACE;
			cnt--;
		}
	}
	return (maze);
}
