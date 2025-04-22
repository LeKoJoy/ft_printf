/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:48:55 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/21 16:52:13 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*stringa;
	size_t	len1;
	size_t	len2;
	size_t	lenofstringa;

	if (!s1 && !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	lenofstringa = len1 + len2;
	stringa = (char *)malloc(sizeof(char) * (lenofstringa + 1));
	if (!stringa)
		return (NULL);
	ft_strlcpy(stringa, s1, len1 + 1);
	ft_strlcat(stringa, s2, lenofstringa + 1);
	return (stringa);
}
