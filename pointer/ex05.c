#include <stdio.h>

void	swap_ptr(int **data)
{
	int	*tmp;
	tmp = data[0];
	data[0] = data[1];
	data[1] = tmp;
}

int	main(void)
{
	int	x, y;
	int	*ptr[2];

	x = 42;
	y = 22;
	ptr[0] = &x;
	ptr[1] = &y;
	printf("ptr[0]=%p\nptr[1]=%p\n", ptr[0], ptr[1]);
	printf("x=%d, y=%d\n", x, y);
	swap_ptr(ptr);
	printf("ptr[0]=%p\nptr[1]=%p\n", ptr[0], ptr[1]);
	printf("x=%d, y=%d\n", x, y);
	return (0);
}