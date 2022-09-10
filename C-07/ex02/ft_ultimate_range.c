/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:05:01 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/12 10:28:00 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*a;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	a = malloc(sizeof(int) * len);
	if (!a)
	{
		*range = 0;
		return (-1);
	}
	*range = a;
	i = 0;
	while (min < max)
	{
		a[i++] = min++;
	}
	return (len);
}
/*
void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	fflush(stdout);
	debug_dump_array(range, bound + 2);
}*/
