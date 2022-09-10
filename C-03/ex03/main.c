#include	<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main(void)
{
	unsigned int u = 5;
	char	arr[50] = "ruveyda";
	char	r[] = " agirman";

	ft_strncat(arr, r, u);

	int a;

	a = 0;
	while (arr[a])
	{
		printf("%c", arr[a]);
		a++;
	}
}
