/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:15:06 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/20 14:41:02 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t c)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return (0);
	if (*str1 != '\0' && *str2 != '\0')
	{
		while (str1[i] && str2[i] && i < c)
		{
			if (str1[i] != str2[i])
				return (((unsigned char)str1[i] - (unsigned char)str2[i]));
			i++;
		}
	}
	if (i < c)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
