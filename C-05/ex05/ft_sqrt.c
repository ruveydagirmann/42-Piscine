/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:53:29 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/06 07:43:15 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (nb == i * i)
				return (i);
			else if (i >= 46341)
				return (0);
			i++;
		}
	}
	return (0);
}
