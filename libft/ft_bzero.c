/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:03:30 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/20 14:33:57 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t c)
{
	size_t	i;
	char	*stringa;

	i = 0;
	stringa = (char *)s;
	while (c)
	{
		stringa[i] = '\0';
		c--;
		i++;
	}
}

/* int main() {
    char buffer[10] = "abcdefghi";
    
    // Очистим содержимое буфера
    bzero(buffer, sizeof(buffer));

    // Проверим содержимое буфера
    printf("Содержимое буфера после bzero: '%s'\n", buffer);
	ft_bzero(buffer, sizeof(buffer));

    // Проверим содержимое буфера
    printf("Содержимое буфера после bzero: '%s'\n", buffer);


    return 0;
} */
