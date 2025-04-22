/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:04:26 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/20 14:29:51 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*stringa;

	stringa = (char *)str;
	i = 0;
	while (i < n)
	{
		stringa[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
