/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:15:11 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 13:23:28 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int main()
{
    char c1 = 'A';
    char c2 = ' ';
    char c3 = '\n';
    char c4 = '~';

    printf("%c: %d\n", c1, ft_isprint(c1));
    printf("'%c': %d\n", c2, ft_isprint(c2));
    printf("Nueva línea: %d\n", ft_isprint(c3));
    printf("%c: %d\n", c4, ft_isprint(c4));

    return 0;
}*/
