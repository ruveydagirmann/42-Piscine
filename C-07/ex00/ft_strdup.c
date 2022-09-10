/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:46:34 by ragirman          #+#    #+#             */
/*   Updated: 2021/11/12 00:52:16 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		c;
	char	*arr;

	i = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	arr = malloc(sizeof(char) * c);
	if (arr == NULL)
		return (0);
	while (src[i] != '\0')
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int		main(void)
{
	char	*str;
	char	*a;

	str = "bilgisayar";
	a  = ft_strdup(str);
	printf("%s", a);
}*/
