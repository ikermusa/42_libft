/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:57:16 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 10:57:26 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s++)
	{
		if (*s == (char)c)
			return ((char *)s);
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main() {
    const char *str = "Hola, mundo!";
    
    // Buscar la letra 'm'
    char *result = ft_strchr(str, 'm');
    if (result) {
        printf("La letra 'm' se encontró en: %s\n", result);
    } else {
        printf("La letra 'm' no se encontró.\n");
    }

    result = ft_strchr(str, '\0');
    if (result) {
        printf("El carácter nulo se encontró: %p\n", result);
    }

    return 0;
}*/