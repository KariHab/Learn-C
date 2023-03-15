#include <stdio.h>

int	main(void)
{
	int	x;
	int	*ptr = NULL;

	printf("ptr = %p\n", &x);
	ptr = &x;
	printf("ptr = %p\n", ptr);
	return (0);
}