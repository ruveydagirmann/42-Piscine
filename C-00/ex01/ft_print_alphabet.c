/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragirman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:59:38 by ragirman          #+#    #+#             */
/*   Updated: 2021/10/23 15:31:36 by ragirman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char (letter);
	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
