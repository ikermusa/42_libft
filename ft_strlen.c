/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:24:10 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 13:33:35 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
int main() {
    const char *str1 = "Hola, mundo!";
    const char *str2 = "";
    const char *str3 = "1234567890";

    printf("Longitud de '%s': %zu\n", str1, ft_strlen(str1));
    printf("Longitud de '%s': %zu\n", str2, ft_strlen(str2));
    printf("Longitud de '%s': %zu\n", str3, ft_strlen(str3));

    return 0;
}*/
