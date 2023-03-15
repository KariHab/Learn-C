#include <stdio.h>

void	div2(int *nbr)
{
	*nbr /= 2;
}

int	main(void)
{
	int	x;
	
	x = 42;
	printf("x = %d\n", x);
	div2(&x);
	printf("x = %d\n", x);
	return (0);
}