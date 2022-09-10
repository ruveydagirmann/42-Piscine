/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 22:26:27 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/05 22:33:08 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (nb >= 0 && power == 0)
		return (1);
	else
	{
		res = 1;
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
	return (0);
}
