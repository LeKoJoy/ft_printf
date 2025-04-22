/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:32:10 by anhoncha          #+#    #+#             */
/*   Updated: 2024/11/06 16:21:43 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_xc(uintptr_t n)
{
	char	*hex_digs;
	int		i;

	i = 0;
	hex_digs = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_print_xc(n / 16);
	i += ft_print_c(hex_digs[n % 16]);
	return (i);
}

int	ft_print_x(uintptr_t n)
{
	char	*hex_digs;
	int		i;

	i = 0;
	hex_digs = "0123456789abcdef";
	if (n >= 16)
		i += ft_print_x(n / 16);
	i += ft_print_c(hex_digs[n % 16]);
	return (i);
}

int	ft_print_hex(unsigned int n, char input)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i += ft_print_c('0');
	}
	else
	{
		if (input == 'x')
			i += ft_print_x((uintptr_t)n);
		else if (input == 'X')
			i += ft_print_xc((uintptr_t)n);
	}
	return (i);
}
