#include	<stdio.h>

char	*ft_strlowcase(char *str);
int	main()
{
	char	*t;
	char	arr[] = "RUVEYDA";
	t = ft_strlowcase(arr);

	printf("%s", t);

	return(0);
}
