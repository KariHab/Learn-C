#include <stdio.h>

int	main(void)
{
	char	str[12] = "bonjour 42";

	str[0] = 'B';
	printf("%s\n", str);
	return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	char	*str = "bonjour 42";

	str[0] = 'B';
	printf("%s\n", str);
	return (0);
}

*/