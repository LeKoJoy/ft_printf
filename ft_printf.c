/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:04:50 by anhoncha          #+#    #+#             */
/*   Updated: 2024/11/12 13:31:47 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flagprocess(va_list args, const char input)
{
	int	i;

	i = 0;
	if (input == 'c')
		i += ft_print_c(va_arg(args, int));
	else if (input == 's')
		i += ft_print_s(va_arg(args, char *));
	else if (input == 'd' || input == 'i')
		i += ft_print_d(va_arg(args, int));
	else if (input == 'p')
		i += ft_print_p(va_arg(args, void *));
	else if (input == 'x' || input == 'X')
		i += ft_print_hex(va_arg(args, unsigned int), input);
	else if (input == 'u')
		i += ft_print_u(va_arg(args, unsigned int));
	else if (input == '%')
		i += ft_print_c('%');
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			len += ft_flagprocess(args, input[i + 1]);
			i++;
		}
		else
			len += ft_print_c(input[i]);
		i++;
	}
	va_end(args);
	return (len);
}
