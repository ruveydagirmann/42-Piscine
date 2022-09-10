/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bceylan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:41:32 by bceylan           #+#    #+#             */
/*   Updated: 2021/10/27 16:06:34 by bceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	k;

	c = 0;
	k = 0;
	while (str[c] != '\0')
	{
		if ((k == 0) && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 'a' - 'A';
			k++;
		}
		else if (k > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
		{
			str[c] += 'a' - 'A';
		}
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A'))
			k = 0;
		else if ((str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			k = 0;
		else
			k++;
		c++;
	}
	return (str);
}
