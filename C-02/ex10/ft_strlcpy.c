/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:24:07 by ragirman          #+#    #+#             */
/*   Updated: 2021/10/30 15:44:36 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[c] != '\0' )
	{
		c++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1 )
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}
