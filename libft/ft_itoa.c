/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:01:14 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/28 13:38:18 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wtf(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

static void	ft_strrev(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

int	ft_sign(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else
		return (0);
}

int	ft_intlen(int n)
{
	int	numero;

	numero = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		numero++;
		n = n / 10;
	}
	return (numero);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	size_t	len;
	int		length;

	sign = ft_sign(n);
	length = ft_intlen(n);
	str = ft_calloc(length + 1 + sign, sizeof(*str));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{
		str[len++] = '0' + ft_wtf(n % 10);
		n = (n / 10);
	}
	if (sign)
		str[len] = '-';
	ft_strrev(str);
	return (str);
}
