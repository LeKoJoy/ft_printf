/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:01:34 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/21 17:04:30 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	srclen = ft_strlen(src);
	j = 0;
	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	if (dstsize <= i)
		return (srclen + dstsize);
	while (src[j] != '\0' && i + j < dstsize -1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (srclen + i);
}
