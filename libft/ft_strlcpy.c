/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:36:26 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/21 16:10:04 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *str1, const char *str2, size_t c)
{
	size_t	i;
	int		l;

	l = 0;
	while (str2[l] != '\0')
		l++;
	i = 0;
	if (c > 0)
	{
		while (str2[i] != '\0' && i < (c - 1))
		{
			str1[i] = str2[i];
			i++;
		}
		str1[i] = '\0';
	}
	return (l);
}
