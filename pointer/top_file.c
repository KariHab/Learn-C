#include <stdio.h>

int	main(void)
{
	int	x;
	int	*ptr = "i'm your new friend";
	printf("the adress of x   : %p\n", &x);
	printf("the adress of ptr : %p\n", ptr);
	return (0);
}