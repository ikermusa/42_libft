/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:21:18 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 10:56:22 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int main() {
    char c = 'b';
    printf("El caracter '%c' en mayúscula es '%c'\n", c, ft_toupper(c));

    c = 'A';
    printf("El caracter '%c' en mayúscula es '%c'\n", c, ft_toupper(c));

    c = '1';
    printf("El caracter '%c' en mayúscula es '%c'\n", c, ft_toupper(c));

    return 0;
}*/
