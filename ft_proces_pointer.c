/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proces_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:16:01 by anhoncha          #+#    #+#             */
/*   Updated: 2024/11/12 13:41:01 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(uintptr_t num)
{
	char	*hex_digs;
	int		i;

	i = 0;
	hex_digs = "0123456789abcdef";
	if (num >= 16)
		i += ft_putnbr_hex(num / 16);
	i += ft_print_c(hex_digs[num % 16]);
	return (i);
}

int	ft_print_p(void *ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		i += ft_print_s("(nil)");
	else
	{
		i += write(1, "0x", 2);
		i += ft_putnbr_hex((uintptr_t)ptr);
	}
	return (i);
}
