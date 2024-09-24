/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:28:44 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 12:59:41 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int main()
{
    char c1 = '3';
    char c2 = 'a';
    char c3 = '7';

    printf("%c: %d\n", c1, ft_isdigit(c1));
    printf("%c: %d\n", c2, ft_isdigit(c2));
    printf("%c: %d\n", c3, ft_isdigit(c3));

    return 0;
}*/
