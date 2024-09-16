/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:49:57 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 10:55:20 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int main() {
    char c = 'B';
    printf("El carácter '%c' en minúscula es '%c'\n", c, ft_tolower(c));

    c = 'a';
    printf("El carácter '%c' en minúscula es '%c'\n", c, ft_tolower(c));

    c = '1';
    printf("El carácter '%c' en minúscula es '%c'\n", c, ft_tolower(c));

    return 0;
}*/
