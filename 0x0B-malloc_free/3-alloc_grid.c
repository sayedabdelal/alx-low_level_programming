#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **g_tab;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	g_tab = malloc(height * sizeof(int *));
	if (g_tab == NULL)
	{
		free(g_tab);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		g_tab[i] = malloc(width * sizeof(int));
		if (g_tab[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g_tab[i]);
			free(g_tab);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			g_tab[i][j] = 0;

	return (g_tab);
}
