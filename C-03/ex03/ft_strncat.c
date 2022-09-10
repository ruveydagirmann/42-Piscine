/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:02:33 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/04 19:02:27 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	a;

	c = 0;
	while (dest[c])
		c++;
	a = 0;
	while (src[a] && a < nb)
	{
		dest[c] = src[a];
		a++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
