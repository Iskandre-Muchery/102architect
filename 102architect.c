/*
** EPITECH PROJECT, 2017
** 102architect
** File description:
** 102architect
*/
#include <stdio.h>

int	architect (int mat1, int mat2, char *ev, int vectX, int vectY)
{
	float Tx;
	float Ty;

	if (ev == "-t") {
		Tx = mat1 + vectX;
		Ty = mat2 + vectY;
		printf ("Translation by the vector (%d, %d)\n",vectX, vectY);
		printf ("(%d,%d) => (%f,%f)\n", mat1, mat2, Tx, Ty);
	}
	if (ev == "-h") {
		Tx = mat1 * vectX;
		Ty = mat2 * vectY;
		printf ("Homothety by the ratios %d and %d\n", vectX, vectY);
		printf ("(%d,%d) => (%f,%f)\n", mat1, mat2, Tx, Ty);
	}
	if (ev == "-r") {
		Tx = mat1;
		Ty = mat2;
	}
	return (0);
}

int main (int ac, char **av)
{
	int mat1 = av[1];
	int mat2 = av[2];
	int ev = av[3];
	int vectX = av[4];
	int vectY = av[5];

	if (ac == 0) {
		printf("No imput\n");
		return (84);
	}
	else if (ac != 6 && ac > 0) {
		printf("Too few arguments\n");
		return (84);
	}
	else {
		architect(mat1, mat2, ev, vectX, vectY);
	}
	return (0);
}