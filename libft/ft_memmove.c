/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:46:10 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/19 15:18:33 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t c)
{
	size_t			i;
	char			j;
	unsigned char	*dest;
	unsigned char	*sorc;

	i = 0;
	j = 1;
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		j = -1;
		dest += c - 1;
		sorc += c - 1;
	}
	while (i < c)
	{
		*dest = *sorc;
		dest += j;
		sorc += j;
		i++;
	}
	return (dst);
}

/* #include <stdio.h>
#include <string.h>  // Для memmove

int main() {
    char str[] = "Hello, world!";
    char str1[]  ="Hello, world!";
    // Используем memmove для копирования перекрывающихся областей памяти
    ft_memmove(str + 7, str, 6);

    // Проверяем результат
    printf("Содержимое строки после memmove: %s\n", str);

   // Используем memmove для копирования перекрывающихся областей памяти
    memmove(str1 + 7, str1, 6);

    // Проверяем результат
    printf("Содержимое строки после memmove: %s\n", str1);
    return 0;
} */
