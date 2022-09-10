/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:31:10 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/06 02:18:22 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			else if ((base[i] < '0') || (base[i] > '9' && base[i] < 'A'))
				return (0);
			else if ((base[i] > 'Z' && base[i] < 'a') || base[i] > 'z')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putbase(char *base, int e, int nbr)
{
	if (nbr < e)
	{
		ft_putchar(base[nbr]);
	}
	else
	{
		ft_putbase(base, e, nbr / e);
		ft_putbase(base, e, nbr % e);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	a;

	a = checkbase(base);
	if (nbr == -2147483648 && a != 0)
	{
		ft_putchar('-');
		ft_putbase(base, a, nbr / -a);
		ft_putbase(base, a, (nbr % a) * -1);
	}
	else if (nbr < 0 && a != 0 )
	{
		ft_putchar('-');
		nbr *= -1;
		ft_putbase(base, a, nbr);
	}
	else if (a != 0)
	{
		ft_putbase(base, a, nbr);
	}
	else if (a == 0)
		return ;
}	
