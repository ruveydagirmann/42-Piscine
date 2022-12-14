/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:54:36 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/05 23:54:42 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	if (nb < 2)
		return (0);
	c = 2;
	while (c <= nb / c)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}
