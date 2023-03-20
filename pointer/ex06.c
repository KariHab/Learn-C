#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	size_t	y, x;
	char	**array2d;

	array2d = calloc(3, sizeof(char));
	array2d[0] = strdup("bonjour\n");
	array2d[1] = strdup("42!\n");
	y = 0;
	while (array2d[y])
	{
		x = 0;
		while (array2d[y][x])
			printf("%c", array2d[y][x++]);
		y++;
	}
	free(array2d[0]);
	free(array2d[1]);
	free(array2d[2]);
	free(array2d);
}