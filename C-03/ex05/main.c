#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[20] = "123";
	char src[] = "45678903";
	unsigned int size = 10;
	unsigned int result;

	result = ft_strlcat(dest, src, size);
	printf("%s\n %d\n-----\n", dest, result);

	return (0);
}

