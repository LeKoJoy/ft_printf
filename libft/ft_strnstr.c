/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhoncha <anhoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:18:13 by anhoncha          #+#    #+#             */
/*   Updated: 2024/09/19 15:27:20 by anhoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int ft_strlen(const char *str) {
	int	length = 0;
	while (str[length] != '\0') {
		length++;
	}
	return length;
}

int ft_strncmp(const char *str1, const char *str2, size_t c)
{
	size_t i;

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
	return (0);
} */

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*find)
		return ((char *)str);
	i = ft_strlen(find);
	while (ft_strncmp(&str[j], find, i) != 0)
	{
		if (!str[j] || j >= (len - i))
			return (NULL);
		++j;
	}
	if (i > len)
		return (NULL);
	return ((char *)(&str[j]));
}
/* 
int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    
    // Ищем подстроку в первых 10 символах
    char *result = ft_strnstr(haystack, needle, 20);

    if (result != NULL) {
        printf("Подстрока найдена: %s\n", result);
    } else {
        printf("Подстрока не найдена в пределах 10 символов. \n");
    }

    return 0;
} */
