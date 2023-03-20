#include <stdio.h>

int	main(void)
{
	int	i;
	int	*ptr;
	int	**ptr_2;

	ptr = &i;
	ptr_2 = &ptr;
	printf("%p\n", ptr);
	printf("%p\n", ptr_2);
	return (0);
}