/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:07:10 by anhoncha          #+#    #+#             */
/*   Updated: 2024/11/11 17:56:19 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stddef.h>

int	ft_printf(const char *input, ...);
int	ft_print_c(int c);
int	ft_print_s(char *str);
int	ft_print_d(int a);
int	ft_print_u(unsigned int n);
int	ft_print_hex(unsigned int n, char input);
int	ft_flagprocess(va_list args, const char input);
int	ft_print_p(void *ptr);

#endif