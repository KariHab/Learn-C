#include <stdio.h>

int	main(void)
{
	char	str[12] = "bonjour 42";
	int		i = 0;

	while (str[i] != 0)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	return (0);
}