/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:35:36 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/21 19:05:00 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t c)
{
	unsigned char		*stringa1;
	unsigned char		*stringa2;

	stringa1 = (unsigned char *)s1;
	stringa2 = (unsigned char *)s2;
	while (c)
	{
		if (*stringa1 != *stringa2)
			return (*stringa1 - *stringa2);
		stringa1++;
		stringa2++;
		c--;
	}
	return (0);
}
