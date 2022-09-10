#include	<stdio.h>
int	ft_strcmp(char *s1,char *s2);

int main()
{
	int t;
	char	r[] = "ruveyda";
	char	e[] = "ruveydais";
	t= ft_strcmp(r, e);
	printf("%d", t);

	return(0);
}

