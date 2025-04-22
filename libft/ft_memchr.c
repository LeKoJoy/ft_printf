/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:36:31 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/19 15:10:54 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t ch)
{
	size_t	i;

	i = 0;
	while (i < ch)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
		{
			return (((unsigned char *)str) + i);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char stringa[20] = "WTF IS A KOLIMOTER?";
	char huina = 'A';
	char *end1;
	char *end2;
	end1 = memchr(stringa, huina, ft_strlen1(stringa));
	printf("String after %c is %s\n", huina, end1);
	end2 = ft_memchr(stringa, huina, ft_strlen1(stringa));
	printf("String after %c is %s\n", huina, end2);
	return (0);
} */
