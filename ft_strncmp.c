/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:59:22 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 11:59:31 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned)s1[i] - (unsigned)s2[i]);
		i++;
	}
	return (0);
}
/*
int main() {
    const char *str1 = "Hola";
    const char *str2 = "Holanda";
    
    int result = ft_strncmp(str1, str2, 4);
    if (result == 0) {
        printf("Las primeras 4 letras son iguales.\n");
    } else if (result < 0) {
        printf("La primera cadena es menor.\n");
    } else {
        printf("La primera cadena es mayor.\n");
    }

    return 0;
}*/