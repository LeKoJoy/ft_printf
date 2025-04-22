/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:22:48 by anhoncha          #+#    #+#             */
/*   Updated: 2024/11/12 15:30:27 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_c(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_s(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_print_s("(null)");
		return (6);
	}
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_d(int a)
{
	char	*nb;
	int		i;

	i = 0;
	nb = ft_itoa(a);
	i = ft_print_s(nb);
	free(nb);
	return (i);
}

int	ft_print_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (ft_print_c('0'));
	if (n > 9)
	{
		i += ft_print_u(n / 10);
	}
	i += ft_print_c((n % 10) + 48);
	return (i);
}
