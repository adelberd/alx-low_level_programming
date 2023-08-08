#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - two dimensional array or pointer to pointer
* @width: the horizontal length or x dimension
* @height: the vertical length or y dimension
* Return: a pointer
*/

int **alloc_grid(int width, int height)
{
	int **matric;
	int height_i, width_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	for (height_i = 0; height_i < height; height_i++)
	{
		matric[height_i] = malloc(sizeof(int) * width);

		if (matric[height_i] == NULL)
		{
			for (; height_i >= 0; height_i--)
				free(matric[height_i]);

			free(matric);
			return (NULL);
		}
	}

	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			matric[height_i][width_i] = 0;
	}

	return (matric);
}
