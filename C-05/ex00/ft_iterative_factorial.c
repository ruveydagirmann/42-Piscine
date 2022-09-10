/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:33:12 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/06 07:22:10 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	c;
	int	res;

	c = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (c <= nb)
	{
		res *= c;
		c++;
	}
	return (res);
}
