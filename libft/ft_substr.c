/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:15:29 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/21 18:27:23 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	strlen;
	size_t	substrlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
		return (ft_strdup(""));
	substrlen = strlen - start;
	if (substrlen > len)
		substrlen = len;
	newstr = (char *)malloc(sizeof(char) * (substrlen +1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s + start, substrlen + 1);
	return (newstr);
}
