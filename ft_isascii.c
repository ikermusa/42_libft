/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:11:42 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 13:14:38 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main() {
    int c1 = 65;
    int c2 = 200;
    int c3 = 48;

    printf("%d: %d\n", c1, ft_isascii(c1));
    printf("%d: %d\n", c2, ft_isascii(c2));
    printf("%d: %d\n", c3, ft_isascii(c3));

    return 0;
}*/
