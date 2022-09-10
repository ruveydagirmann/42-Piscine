/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 00:07:58 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/06 00:08:03 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	c;

	if (nb < 2)
		return (2);
	c = 2;
	while (c <= nb / c)
	{
		if (nb % c == 0)
		{
			nb++;
			c = 1;
		}
		c++;
	}
	return (nb);
}
