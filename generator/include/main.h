/*
** EPITECH PROJECT, 2018
** dante
** File description:
** main
*/

#ifndef MAIN_H
	#define MAIN_H
	#define WALL	'X'
	#define SPACE	' '
	#define VISITED	'x'
	#define DIR_UP	1
	#define DIR_DW	2
	#define DIR_LF	4
	#define DIR_RG	8

typedef struct coord_s {
	int x;
	int y;
} coord_t;

typedef struct maze_s {
	char **maze;
	int width;
	int length;
} maze_t;

void	display_maze(char **maze, int width, int length);

int	*randomize_array(int *array, int len);

int	check_above(maze_t *maze, coord_t *pos);
int	check_under(maze_t *maze, coord_t *pos);
int	check_lside(maze_t *maze, coord_t *pos);
int	check_rside(maze_t *maze, coord_t *pos);

int	go_back(maze_t *, coord_t *);

char	**gen_per_maze(int wid, int len);
#endif /* MAIN_H */
