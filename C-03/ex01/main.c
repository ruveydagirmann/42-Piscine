#include	<stdio.h>
#include <string.h>
int	ft_strncmp(char *s1,char *s2, unsigned int n);

int main()
{
	unsigned int s;
	int t;
	s = 7;
	char	r[] = "ruveyda";
	char	e[] = "ruv";
	t= ft_strncmp(r, e, s);
	printf("%d", t);

	return(0);
}

